#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066FE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066FE0C;

loc_8066FE0C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    r3 = MemoryInline::FlatRead32((r30 + 24576));
    // inline leaf 0x8000B2D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -32752));
    // end of inlined leaf 0x8000B2D8
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r3 = MemoryInline::FlatRead32((r30 + 24576));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x8000B2E0 (10 guest instruction(s))
}

loc_inl1_0x8000B2E0:
{
    r0 = (r4 + -65);
    r3 = 1380777984;
    r0 = (r0 & 255);
}

loc_inl1_0x8000B2F0:
{
    r3 = (r3 + 17232);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(25))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8000B2F8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = (r3 + 1380777984);
    r3 = (r3 + 17152);
    goto loc_inl1_cont_8000B2E0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8000B2E0:
{
    // end of inlined leaf 0x8000B2E0
    r30 = r3;
    r3 = r29;
    r4 = (r1 + 16);
    // inline leaf 0x801DE4FC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4FC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FE5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FE68;
    }
}

loc_8066FE60:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8066FF88;
}

loc_8066FE68:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r30 & -256);
    r0 = (r0 & -256);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8066FE78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FF7C;
    }
}

loc_8066FE7C:
{
    r3 = r29;
    r4 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DE3A8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FE8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FE98;
    }
}

loc_8066FE90:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8066FF88;
}

loc_8066FE98:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8066FEA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FF70;
    }
}

loc_8066FEA4:
{
    r3 = r29;
    r4 = (r1 + 8);
    // inline leaf 0x801DE50C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = 0;
    MemoryInline::FlatWriteRam16(r4, static_cast<uint16_t>(r0));
    // end of inlined leaf 0x801DE50C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FEB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FEC0;
    }
}

loc_8066FEB8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8066FF88;
}

loc_8066FEC0:
{
    r3 = r29;
    r4 = (r1 + 12);
    // inline leaf 0x801DE420 (7 guest instruction(s))
}

loc_inl4_0x801DE420:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
    r3 = 0;
}

loc_inl4_0x801DE42C:
{
    MemoryInline::FlatWriteRam32(r4, r0);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x801DE434:
{
    r3 = -14;
    goto loc_inl4_cont_801DE420;
}

loc_inl4_return:
{
}

loc_inl4_cont_801DE420:
{
    // end of inlined leaf 0x801DE420
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FED0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FEDC;
    }
}

loc_8066FED4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    goto loc_8066FF88;
}

loc_8066FEDC:
{
    r3 = MemoryInline::FlatRead16((r1 + 8));
}

loc_8066FEE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066FF00;
    }
}

loc_8066FEE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8066FEF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FF00;
    }
}

loc_8066FEF4:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8066FF84;
}

loc_8066FF00:
{
}

loc_8066FF04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066FF20;
    }
}

loc_8066FF08:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066FF10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FF20;
    }
}

loc_8066FF14:
{
    r0 = 3;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8066FF84;
}

loc_8066FF20:
{
}

loc_8066FF24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8066FF40;
    }
}

loc_8066FF28:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8066FF30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FF40;
    }
}

loc_8066FF34:
{
    r0 = 5;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8066FF84;
}

loc_8066FF40:
{
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8066FF48:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8066FF64;
    }
}

loc_8066FF4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8066FF54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FF64;
    }
}

loc_8066FF58:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8066FF84;
}

loc_8066FF64:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8066FF84;
}

loc_8066FF70:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8066FF84;
}

loc_8066FF7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8066FF84:
{
    r3 = 0;
}

loc_8066FF88:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000203B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8066FE0C func_8066FE0C preserves=true fpr_mask=0x00000000
