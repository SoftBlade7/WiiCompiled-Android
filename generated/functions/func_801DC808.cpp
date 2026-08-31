#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DC808(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DC808;

loc_801DC808:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r31 = MemoryInline::FlatRead16((r13 + -28252));
    // inline leaf 0x801A0598 (8 guest instruction(s))
}

loc_inl0_0x801A0598:
{
    r0 = MemoryInline::FlatRead32((r13 + -25512));
}

loc_inl0_0x801A05A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x801A05AC;
    }
}

loc_inl0_0x801A05A4:
{
    r3 = 64;
    goto loc_inl0_cont_801A0598;
}

loc_inl0_0x801A05AC:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead8((r3 + 12676));
}

loc_inl0_cont_801A0598:
{
    // end of inlined leaf 0x801A0598
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(128));
}

loc_801DC82C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DC854;
    }
}

loc_801DC830:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DC840;
    }
}

loc_801DC834:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(64));
}

loc_801DC838:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DC84C;
    }
}

loc_801DC83C:
{
    goto loc_801DC890;
}

loc_801DC840:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_801DC844:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DC890;
    }
}

loc_801DC848:
{
    goto loc_801DC860;
}

loc_801DC84C:
{
    r31 = 1;
    goto loc_801DC890;
}

loc_801DC854:
{
    // inline leaf 0x8016321C (2 guest instruction(s))
    r3 = 0x80000000u;
    // end of inlined leaf 0x8016321C
    r31 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_801DC890;
}

loc_801DC860:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r30 = (r3 + 2048);
    r3 = r30;
    ctx->lr = 0x801DC870u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019E40Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DC874:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DC890;
    }
}

loc_801DC878:
{
    r3 = r30;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8019C380u>(ctx);
    r3 = ctx->gpr[3];
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DC888:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DC890;
    }
}

loc_801DC88C:
{
    r31 = MemoryInline::FlatRead16((r1 + 12));
}

loc_801DC890:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00021FB gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801DC808 func_801DC808 preserves=true fpr_mask=0x00000000
