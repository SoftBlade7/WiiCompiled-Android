#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009F4E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8009F4E0;

loc_8009F4E0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r3 + 40));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead8((r5 + 24));
    r4 = MemoryInline::FlatRead32((r5 + 28));
    // inline leaf 0x800AD0B0 (9 guest instruction(s))
}

loc_inl0_0x800AD0B0:
{
}

loc_inl0_0x800AD0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x800AD0C0;
    }
}

loc_inl0_0x800AD0B8:
{
    r3 = (r4 + r5);
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_0x800AD0C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x800AD0C4:
{
    r3 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800AD0CC:
{
    r3 = r4;
    goto loc_inl0_cont_800AD0B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_800AD0B0:
{
    // end of inlined leaf 0x800AD0B0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8009F500:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8009F50C;
    }
}

loc_8009F504:
{
    r3 = 0;
    goto loc_8009F510;
}

loc_8009F50C:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8009F510:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009F4E0 func_8009F4E0 preserves=true fpr_mask=0x00000000
