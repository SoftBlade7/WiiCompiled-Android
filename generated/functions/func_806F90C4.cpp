#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F90C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F90C4;

loc_806F90C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F90E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F9128;
    }
}

loc_806F90E4:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F90EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F911C;
    }
}

loc_806F90F0:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F90F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F9100;
    }
}

loc_806F90FC:
{
    ctx->lr = 0x806F9100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806F9100:
{
    r3 = 0x809C0000u;
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 9004));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite32((r4 + 184), r0);
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    MemoryInline::FlatWrite32((r3 + 464), r0);
}

loc_806F911C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 28), r0);
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r0));
}

loc_806F9128:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F90C4 func_806F90C4 preserves=true fpr_mask=0x00000000
