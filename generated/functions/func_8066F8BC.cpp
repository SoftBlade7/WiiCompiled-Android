#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066F8BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066F8BC;

loc_8066F8BC:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-128 - r11_subfic_ra_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(-128) >= static_cast<uint32_t>(r11_subfic_ra_0) ? 1u : 0u) << 29);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    MemoryInline::FlatWriteRam32((r12 + -4), r31);
    MemoryInline::FlatWriteRam32((r12 + -8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F8E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F930;
    }
}

loc_8066F8EC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r3 = MemoryInline::FlatRead32((r3 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8066F908u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F90C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F91C;
    }
}

loc_8066F910:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_8066F930;
}

loc_8066F91C:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r30 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_8066F934;
}

loc_8066F930:
{
    r3 = 0;
}

loc_8066F934:
{
}

loc_8066F938:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8066F94C;
    }
}

loc_8066F93C:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 30076), r3);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066F9F0;
}

loc_8066F94C:
{
    r0 = MemoryInline::FlatRead32((r30 + 17000));
    r3 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r30 + 16972));
    r4 = MemoryInline::FlatRead32((r30 + 16976));
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    r0 = MemoryInline::FlatRead32((r30 + 16980));
    r0 = (r0 & 255);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x8000B2E0 (10 guest instruction(s))
}

loc_inl0_0x8000B2E0:
{
    r0 = (r4 + -65);
    r3 = 1380777984;
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
}

loc_inl0_0x8000B2F0:
{
    r3 = (r3 + 17232);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8000B2F8:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r3 = (r3 + 1380777984);
    r3 = (r3 + 17152);
    goto loc_inl0_cont_8000B2E0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8000B2E0:
{
    // end of inlined leaf 0x8000B2E0
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r3 = (r1 + 64);
    r4 = (r1 + 32);
    ctx->lr = 0x8066F98Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E75ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F990:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F9CC;
    }
}

loc_8066F994:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl1_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl1_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8023320C;
    }
}

loc_inl1_0x80233204:
{
}

loc_inl1_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl1_0x80233214;
    }
}

loc_inl1_0x8023320C:
{
    r3 = 1;
    goto loc_inl1_cont_802331F8;
}

loc_inl1_0x80233214:
{
    r3 = 0;
}

loc_inl1_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F9A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066F9AC;
    }
}

loc_8066F9A8:
{
    goto loc_8066F9D0;
}

loc_8066F9AC:
{
    r3 = (r1 + 64);
    ctx->lr = 0x8066F9B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801E7508u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066F9B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066F9C0;
    }
}

loc_8066F9BC:
{
    goto loc_8066F9CC;
}

loc_8066F9C0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r31 = r3;
    goto loc_8066F9D0;
}

loc_8066F9CC:
{
    r31 = 0;
}

loc_8066F9D0:
{
}

loc_8066F9D4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8066F9E8;
    }
}

loc_8066F9D8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r30 + 30076), r31);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_8066F9F0;
}

loc_8066F9E8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_8066F9F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066F9F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066FA2C;
    }
}

loc_8066F9FC:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    r12 = MemoryInline::FlatRead32((r3 + 24));
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x8066FA10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066FA14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8066FA24;
    }
}

loc_8066FA18:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 32), static_cast<uint8_t>(r0));
    goto loc_8066FA2C;
}

loc_8066FA24:
{
    r3 = MemoryInline::FlatRead32((r30 + 30092));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80233184u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8066FA2C:
{
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    r31 = MemoryInline::FlatRead32((r10 + -4));
    r30 = MemoryInline::FlatRead32((r10 + -8));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066F8BC func_8066F8BC preserves=true fpr_mask=0x00000000
