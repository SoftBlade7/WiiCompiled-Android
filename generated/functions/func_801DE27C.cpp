#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DE27C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DE27C;

loc_801DE27C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r5 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE2A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE2AC;
    }
}

loc_801DE2A4:
{
    r0 = (r5 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE2A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE2B4;
    }
}

loc_801DE2AC:
{
    r3 = -7;
    goto loc_801DE330;
}

loc_801DE2B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801DE2B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE2C4;
    }
}

loc_801DE2BC:
{
    r3 = -3;
    goto loc_801DE330;
}

loc_801DE2C4:
{
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE2C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE2D4;
    }
}

loc_801DE2CC:
{
    r0 = (r5 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE2D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE2DC;
    }
}

loc_801DE2D4:
{
    r3 = -4;
    goto loc_801DE330;
}

loc_801DE2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_801DE2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801DE2F8;
    }
}

loc_801DE2E8:
{
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801DE2EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE2F8;
    }
}

loc_801DE2F0:
{
    r3 = -4;
    goto loc_801DE330;
}

loc_801DE2F8:
{
    // inline leaf 0x801DCF68 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24380));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x801DCF68
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DE300:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DE324;
    }
}

loc_801DE304:
{
    ctx->lr = 0x801DE308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC7BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = (r3 + -1212219392);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(17729));
}

loc_801DE310:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DE324;
    }
}

loc_801DE314:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(16384));
}

loc_801DE318:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801DE324;
    }
}

loc_801DE31C:
{
    r3 = -3;
    goto loc_801DE330;
}

loc_801DE324:
{
    r0 = (r31 | 262144);
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 24), r0);
}

loc_801DE330:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000207B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801DE27C func_801DE27C preserves=true fpr_mask=0x00000000
