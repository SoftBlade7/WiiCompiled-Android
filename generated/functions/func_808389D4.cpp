#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808389D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808389D4;

loc_808389D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    goto loc_80838A48;
}

loc_808389FC:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80838A04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80838A1C;
    }
}

loc_80838A08:
{
    r0 = MemoryInline::FlatRead32((r29 + 992));
    r4 = MemoryInline::FlatRead32((r29 + 1004));
    r3 = (r0 + r31);
    // inline leaf 0x805F44A0 (8 guest instruction(s))
}

loc_inl0_0x805F44A0:
{
}

loc_inl0_0x805F44A4:
{
    r0 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl0_0x805F44B4;
    }
}

loc_inl0_0x805F44AC:
{
}

loc_inl0_0x805F44B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(112))) {
        goto loc_inl0_0x805F44B8;
    }
}

loc_inl0_0x805F44B4:
{
    r0 = 1;
}

loc_inl0_0x805F44B8:
{
    MemoryInline::FlatWrite8((r3 + 380), static_cast<uint8_t>(r0));
}

loc_inl0_cont_805F44A0:
{
    // end of inlined leaf 0x805F44A0
    goto loc_80838A40;
}

loc_80838A1C:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x80838A30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r29 + 992));
    r4 = r3;
    r3 = (r0 + r31);
    // inline leaf 0x805F44A0 (8 guest instruction(s))
}

loc_inl1_0x805F44A0:
{
}

loc_inl1_0x805F44A4:
{
    r0 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_inl1_0x805F44B4;
    }
}

loc_inl1_0x805F44AC:
{
}

loc_inl1_0x805F44B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(112))) {
        goto loc_inl1_0x805F44B8;
    }
}

loc_inl1_0x805F44B4:
{
    r0 = 1;
}

loc_inl1_0x805F44B8:
{
    MemoryInline::FlatWrite8((r3 + 380), static_cast<uint8_t>(r0));
}

loc_inl1_cont_805F44A0:
{
    // end of inlined leaf 0x805F44A0
}

loc_80838A40:
{
    r31 = (r31 + 384);
    r30 = (r30 + 1);
}

loc_80838A48:
{
    r0 = MemoryInline::FlatRead32((r29 + 1064));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(r0));
}

loc_80838A50:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808389FC;
    }
}

loc_80838A54:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x808389D4 func_808389D4 preserves=true fpr_mask=0x00000000
