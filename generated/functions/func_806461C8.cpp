#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806461C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806461C8;

loc_806461C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_806461D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806461D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 5624));
}

loc_806461DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806461EC;
    }
}

loc_806461E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(300));
}

loc_806461E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_806461EC:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -27884));
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806461C8 func_806461C8 preserves=true fpr_mask=0x00000000
