#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80548C58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80548C58;

loc_80548C58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r9 = -1;
    r10 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 5;
    ctr = r0;
}

loc_80548C74:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
}

loc_80548C7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80548CA0;
    }
}

loc_80548C80:
{
    r0 = (r10 & 255);
    r7 = (r0 * 900);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548C94:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(-1))) {
        goto loc_80548CA0;
    }
}

loc_80548C98:
{
    r9 = r0;
    goto loc_80548CC0;
}

loc_80548CA0:
{
    r8 = (r10 & 255);
    r0 = (r8 * 900);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548CB4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80548CC0;
    }
}

loc_80548CB8:
{
    r9 = r8;
    goto loc_80548D18;
}

loc_80548CC0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r10 = (r10 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_80548CCC:
{
    r0 = (r10 & 255);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80548CF0;
    }
}

loc_80548CD4:
{
    r7 = (r0 * 900);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548CE4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(-1))) {
        goto loc_80548CF0;
    }
}

loc_80548CE8:
{
    r9 = r0;
    goto loc_80548D10;
}

loc_80548CF0:
{
    r8 = (r10 & 255);
    r0 = (r8 * 900);
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548D04:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_80548D10;
    }
}

loc_80548D08:
{
    r9 = r8;
    goto loc_80548D18;
}

loc_80548D10:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80548C74;
    }
}

loc_80548D18:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80548DF8;
    }
}

loc_80548D20:
{
    r0 = 2;
    r8 = r5;
    r10 = 0;
    ctr = r0;
}

loc_80548D30:
{
    r0 = (r10 & 255);
    r7 = (r0 * 900);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548D44:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_80548D50;
    }
}

loc_80548D48:
{
    r9 = r0;
    r8 = r7;
}

loc_80548D50:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
    r7 = (r0 * 900);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548D68:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_80548D74;
    }
}

loc_80548D6C:
{
    r9 = r0;
    r8 = r7;
}

loc_80548D74:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
    r7 = (r0 * 900);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548D8C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_80548D98;
    }
}

loc_80548D90:
{
    r9 = r0;
    r8 = r7;
}

loc_80548D98:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
    r7 = (r0 * 900);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548DB0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_80548DBC;
    }
}

loc_80548DB4:
{
    r9 = r0;
    r8 = r7;
}

loc_80548DBC:
{
    r10 = (r10 + 1);
    r0 = (r10 & 255);
    r7 = (r0 * 900);
    r7 = (r3 + r7);
    r7 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80548DD4:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r8))) {
        goto loc_80548DE0;
    }
}

loc_80548DD8:
{
    r9 = r0;
    r8 = r7;
}

loc_80548DE0:
{
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80548D30;
    }
}

loc_80548DE8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80548DF8;
    }
}

loc_80548DF0:
{
    r3 = 0;
    goto loc_80548E20;
}

loc_80548DF8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r0 = (r0 * 900);
    r3 = (r3 + r0);
    r0 = (r6 * 448);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r5 = 448;
    r3 = (r3 + r0);
    r3 = (r3 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_80548E20:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80548C58 func_80548C58 preserves=true fpr_mask=0x00000000
