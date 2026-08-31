#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A0B50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A0B50;

loc_800A0B50:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    r28 = r4;
    r3 = r28;
    ctx->lr = 0x800A0B78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DEC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = (r3 * 92);
    r30 = r3;
    r29 = 0;
    r0 = (r4 + 3);
    r31 = (r0 & -4);
    goto loc_800A0BE4;
}

loc_800A0B90:
{
    r3 = r28;
    r4 = r29;
    r5 = (r1 + 8);
    ctx->lr = 0x800A0BA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_800A0BA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A0BE0;
    }
}

loc_800A0BA8:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r3 + 3);
    r4 = (r0 & -4);
    ctr = r5;
}

loc_800A0BC0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_800A0BE0;
    }
}

loc_800A0BC4:
{
    // nop
}

loc_800A0BC8:
{
}

loc_800A0BCC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A0BDC;
    }
}

loc_800A0BD0:
{
    r0 = (r31 + 63);
    r31 = (r0 & -32);
    r31 = (r31 + r4);
}

loc_800A0BDC:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800A0BC8;
    }
}

loc_800A0BE0:
{
    r29 = (r29 + 1);
}

loc_800A0BE4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(r30));
}

loc_800A0BE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A0B90;
    }
}

loc_800A0BEC:
{
    r3 = r28;
    ctx->lr = 0x800A0BF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DED0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    r3 = r28;
    r0 = (r4 + 7);
    r0 = (r0 & -4);
    r4 = (r1 + 16);
    r31 = (r31 + r0);
    ctx->lr = 0x800A0C10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009DF90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A0C14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A0C68;
    }
}

loc_800A0C18:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r6 = (r0 * 1208);
    r3 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r5 = (r4 * 4288);
    r6 = (r6 + 3);
    r4 = (r3 * 576);
    r3 = (r6 & -4);
    r5 = (r5 + 3);
    r31 = (r31 + r3);
    r3 = (r0 * 248);
    r5 = (r5 & -4);
    r0 = (r4 + 3);
    r31 = (r31 + r5);
    r4 = (r0 & -4);
    r0 = (r3 + 3);
    r31 = (r31 + r4);
    r0 = (r0 & -4);
    r31 = (r31 + r0);
}

loc_800A0C68:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A0B50 func_800A0B50 preserves=true fpr_mask=0x00000000
