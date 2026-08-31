#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B7410(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B7410;

loc_801B7410:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -2097152);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(44848));
}

loc_801B7430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B744C;
    }
}

loc_801B7434:
{
    r5 = 0x802A0000u;
    r3 = (r13 + -28568);
    r5 = (r5 + -12200);
    r4 = 25;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801B744Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A2660u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801B744C:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 0;
    r5 = 1;
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_801B7500;
}

loc_801B7464:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & 524280);
    r4_addr_2 = (r4 + r6);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_801B7474:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B74AC;
    }
}

loc_801B7478:
{
    r0 = (r31 + r0);
    r4_addr_3 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_3, r0);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r4_addr_4 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    r0 = MemoryInline::FlatRead8((r4 + 35));
}

loc_801B7490:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B74AC;
    }
}

loc_801B7494:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r4_addr_5 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    MemoryInline::FlatWrite8((r4 + 35), static_cast<uint8_t>(r5));
}

loc_801B74AC:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801B74BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B74FC;
    }
}

loc_801B74C0:
{
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_801B74DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B74FC;
    }
}

loc_801B74E0:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
}

loc_801B74FC:
{
    r3 = (r3 + 1);
}

loc_801B7500:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801B750C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801B7464;
    }
}

loc_801B7510:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B7410 func_801B7410 preserves=true fpr_mask=0x00000000
