#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801439D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801439D4;

loc_801439D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80340000u;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2;
    r5 = (r5 + -30144);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = (r5 + 172);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctr = r0;
}

loc_80143A00:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80143A08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143A1C;
    }
}

loc_80143A0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143A14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143A1C;
    }
}

loc_80143A18:
{
    goto loc_80143A8C;
}

loc_80143A1C:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r6 = (r6 + 1);
}

loc_80143A28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143A3C;
    }
}

loc_80143A2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143A34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143A3C;
    }
}

loc_80143A38:
{
    goto loc_80143A8C;
}

loc_80143A3C:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r6 = (r6 + 1);
}

loc_80143A48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143A5C;
    }
}

loc_80143A4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143A54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143A5C;
    }
}

loc_80143A58:
{
    goto loc_80143A8C;
}

loc_80143A5C:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r6 = (r6 + 1);
}

loc_80143A68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143A7C;
    }
}

loc_80143A6C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_80143A74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80143A7C;
    }
}

loc_80143A78:
{
    goto loc_80143A8C;
}

loc_80143A7C:
{
    r6 = (r6 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143A00;
    }
}

loc_80143A88:
{
    r31 = 0;
}

loc_80143A8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80143A90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143BA8;
    }
}

loc_80143A94:
{
    r0 = MemoryInline::FlatRead16(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80143A9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80143AD4;
    }
}

loc_80143AA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = (r0 | 4);
    r0 = (r3 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80143AAC:
{
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143BA8;
    }
}

loc_80143AB4:
{
    r0 = 4;
    r4 = 256;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctr = r12;
    ctx->lr = 0x80143AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80143BA8;
}

loc_80143AD4:
{
    r12 = MemoryInline::FlatRead32((r31 + 32));
    r4 = 257;
    r3 = MemoryInline::FlatRead16((r31 + 4));
    ctr = r12;
    ctx->lr = 0x80143AE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = MemoryInline::FlatRead16((r31 + 16));
    goto loc_80143AFC;
}

loc_80143AF0:
{
    r3 = (r31 + 20);
    ctx->lr = 0x80143AF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012F4D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctx->lr = 0x80143AFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012EE3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80143AFC:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80143B04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80143AF0;
    }
}

loc_80143B08:
{
    r3 = 0x80340000u;
    r4 = 0;
    r3 = (r3 + -30144);
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r4));
    r4 = (r3 + 172);
    r3 = 0;
    ctr = r0;
}

loc_80143B28:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80143B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143B40;
    }
}

loc_80143B34:
{
    r0 = MemoryInline::FlatRead16((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143B3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143BA8;
    }
}

loc_80143B40:
{
    r0 = MemoryInline::FlatRead8((r4 + 96));
    r3 = (r3 + 1);
}

loc_80143B4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143B5C;
    }
}

loc_80143B50:
{
    r0 = MemoryInline::FlatRead16((r4 + 112));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143B58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143BA8;
    }
}

loc_80143B5C:
{
    r0 = MemoryInline::FlatRead8((r4 + 192));
    r3 = (r3 + 1);
}

loc_80143B68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80143B78;
    }
}

loc_80143B6C:
{
    r0 = MemoryInline::FlatRead16((r4 + 208));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143B74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143BA8;
    }
}

loc_80143B78:
{
    r0 = MemoryInline::FlatRead8((r4 + 288));
    r3 = (r3 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80143B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143B94;
    }
}

loc_80143B88:
{
    r0 = MemoryInline::FlatRead16((r4 + 304));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_80143B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80143BA8;
    }
}

loc_80143B94:
{
    r3 = (r3 + 1);
    r4 = (r4 + 384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80143B28;
    }
}

loc_80143BA0:
{
    r3 = r30;
    ctx->lr = 0x80143BA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014A1FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80143BA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801439D4 func_801439D4 preserves=true fpr_mask=0x00000000
