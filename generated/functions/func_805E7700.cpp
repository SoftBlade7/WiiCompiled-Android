#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E7700(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E7700;

loc_805E7700:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 187));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E7718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7724;
    }
}

loc_805E771C:
{
    r3 = 0;
    goto loc_805E77E4;
}

loc_805E7724:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E772C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7738;
    }
}

loc_805E7730:
{
    r3 = 1;
    goto loc_805E77E4;
}

loc_805E7738:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E7740:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E774C;
    }
}

loc_805E7744:
{
    r3 = 0;
    goto loc_805E77E4;
}

loc_805E774C:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E7754:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7760;
    }
}

loc_805E7758:
{
    r3 = 1;
    goto loc_805E77E4;
}

loc_805E7760:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E7768:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7774;
    }
}

loc_805E776C:
{
    r3 = 0;
    goto loc_805E77E4;
}

loc_805E7774:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E777C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7788;
    }
}

loc_805E7780:
{
    r3 = 1;
    goto loc_805E77E4;
}

loc_805E7788:
{
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E7790:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E779C;
    }
}

loc_805E7794:
{
    r3 = 0;
    goto loc_805E77E4;
}

loc_805E779C:
{
    r31 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805E77A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E77B0;
    }
}

loc_805E77A8:
{
    r3 = 1;
    goto loc_805E77E4;
}

loc_805E77B0:
{
    r3 = r31;
    // inline leaf 0x805E77F8 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 187));
    r3 = (r0 & 1);
    // end of inlined leaf 0x805E77F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E77BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E77C8;
    }
}

loc_805E77C0:
{
    r3 = 0;
    goto loc_805E77E4;
}

loc_805E77C8:
{
    r3 = r31;
    // inline leaf 0x805E74F8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x805E74F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E77D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E77E0;
    }
}

loc_805E77D8:
{
    r3 = 1;
    goto loc_805E77E4;
}

loc_805E77E0:
{
    ctx->lr = 0x805E77E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E7700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_805E77E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800007FB gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805E7700 func_805E7700 preserves=true fpr_mask=0x00000000
