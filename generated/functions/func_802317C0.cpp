#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802317C0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_802317C0;

loc_802317C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = r4;
    ctx->lr = 0x802317E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DD044u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 32);
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_802317EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80231830;
    }
}

loc_802317F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802317F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023181C;
    }
}

loc_802317F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-39));
}

loc_802317FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231830;
    }
}

loc_80231800:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-6));
}

loc_80231804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231830;
    }
}

loc_80231808:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8023180C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231830;
    }
}

loc_80231810:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-9));
}

loc_80231814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231844;
    }
}

loc_80231818:
{
    goto loc_80231858;
}

loc_8023181C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_80231868;
}

loc_80231830:
{
    // inline leaf 0x801DD220 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -24372));
    // end of inlined leaf 0x801DD220
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 8), r31);
    goto loc_80231868;
}

loc_80231844:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 3;
    MemoryInline::FlatWrite32((r30 + 8), r3);
    goto loc_80231868;
}

loc_80231858:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_80231868:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r0;
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802317C0 func_802317C0 preserves=true fpr_mask=0x00000000
