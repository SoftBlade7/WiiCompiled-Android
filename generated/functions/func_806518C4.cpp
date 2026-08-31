#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806518C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806518C4;

loc_806518C4:
{
    r4 = MemoryInline::FlatRead32((r5 + 152));
    r0 = MemoryInline::FlatRead32((r4 + 720));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806518D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806518E0;
    }
}

loc_806518D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 724));
    MemoryInline::FlatWrite32((r3 + 648), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80651914u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_806518E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8448));
    // inline leaf 0x8066048C (7 guest instruction(s))
}

loc_inl0_0x8066048C:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80660494:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x806604A0;
    }
}

loc_inl0_0x80660498:
{
    r3 = MemoryInline::FlatRead8((r3 + 63));
    goto loc_inl0_cont_8066048C;
}

loc_inl0_0x806604A0:
{
    r3 = 0;
}

loc_inl0_cont_8066048C:
{
    // end of inlined leaf 0x8066048C
    MemoryInline::FlatWrite32((r15 + 648), r3);
    r4 = MemoryInline::FlatRead32((r14 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 724), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80651914u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806518C4 func_806518C4 preserves=true fpr_mask=0x00000000
