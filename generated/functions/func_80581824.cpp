#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80581824(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80581824;

loc_80581824:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 256);
}

loc_8058184C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80581890;
    }
}

loc_80581850:
{
    r4 = MemoryInline::FlatRead16((r3 + 424));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r30 = 0;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 424), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80581880;
    }
}

loc_80581868:
{
    r3 = MemoryInline::FlatRead32(r3);
    r30 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -257);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_80581880:
{
    r3 = r31;
    // inline leaf 0x8059108C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 88));
    // end of inlined leaf 0x8059108C
    r4 = r30;
    ctx->lr = 0x80581890u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8056A300u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80581890:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2936));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805818A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581954;
    }
}

loc_805818A4:
{
    r5 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805818B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80581954;
    }
}

loc_805818B8:
{
    r0 = (r4 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805818BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581954;
    }
}

loc_805818C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805818C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581954;
    }
}

loc_805818CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 24576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805818D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80581954;
    }
}

loc_805818D8:
{
    r4 = MemoryInline::FlatRead16((r31 + 428));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 0x808B0000u;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r31 + 428), static_cast<uint16_t>(r0));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r3 + 23060));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_805818F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80581954;
    }
}

loc_805818F8:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 786432);
}

loc_80581904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80581918;
    }
}

loc_80581908:
{
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_80581918:
{
    r3 = r31;
    r4 = 6;
    // inline leaf 0x805917F4 (13 guest instruction(s))
}

loc_inl1_0x805917F4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x80591804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80591808:
{
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    goto loc_inl1_cont_805917F4;
}

loc_inl1_return:
{
}

loc_inl1_cont_805917F4:
{
    // end of inlined leaf 0x805917F4
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 428), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & -65537);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 | 131072);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80581954:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80581824 func_80581824 preserves=true fpr_mask=0x00000000
