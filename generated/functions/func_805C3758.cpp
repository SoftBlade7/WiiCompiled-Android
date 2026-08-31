#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C3758(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805C3758;

loc_805C3758:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805C3760:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_805C3764:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10484));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 84));
}

loc_805C3778:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_805C3790;
    }
}

loc_805C377C:
{
}

loc_805C3780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_805C37B0;
    }
}

loc_805C3784:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_805C3788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C37CC;
    }
}

loc_805C378C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_805C3790:
{
}

loc_805C3794:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1))) {
        goto loc_805C37A0;
    }
}

loc_805C3798:
{
    r0 = 86;
    MemoryInline::FlatWrite32((r3 + 84), r0);
}

loc_805C37A0:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12912));
    r4 = 0;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl0_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl0_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80602494;
    }
}

loc_inl0_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl0_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl0_cont_80602488:
{
    // end of inlined leaf 0x80602488
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_805C37B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_805C37B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_805C37BC:
{
    r5 = 0x80890000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12912));
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl1_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl1_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x80602494;
    }
}

loc_inl1_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl1_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80602488:
{
    // end of inlined leaf 0x80602488
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_805C37CC:
{
    r5 = 0x80890000u;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 12912));
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl2_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl2_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80602494;
    }
}

loc_inl2_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl2_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl2_cont_80602488:
{
    // end of inlined leaf 0x80602488
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805C3758 func_805C3758 preserves=true fpr_mask=0x00000000
