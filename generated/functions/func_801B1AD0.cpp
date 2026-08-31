#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B1AD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B1AD0;

loc_801B1AD0:
{
}

loc_801B1AD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801B1B34;
    }
}

loc_801B1AD8:
{
    r30 = 0x80350000u;
    r30 = (r30 + -32160);
    r0 = MemoryInline::FlatRead32((r30 + 392));
}

loc_801B1AE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B1AF4;
    }
}

loc_801B1AEC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -25123), static_cast<uint8_t>(r0));
}

loc_801B1AF4:
{
    r12 = MemoryInline::FlatRead32((r30 + 388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801B1AFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1B28;
    }
}

loc_801B1B00:
{
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWriteRam32((r30 + 388), r31);
    ctr = r12;
    ctx->lr = 0x801B1B14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801B1B1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1B28;
    }
}

loc_801B1B20:
{
    r3 = r30;
    ctx->lr = 0x801B1B28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B1B28:
{
    r0 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWrite8((r13 + -25144), static_cast<uint8_t>(r0));
    goto loc_801B1BCC;
}

loc_801B1B34:
{
    r5 = 0x80350000u;
    r3 = 2;
    r5 = (r5 + -32160);
    r0 = MemoryInline::FlatRead8((r5 + 345));
    MemoryInline::FlatWriteRam32((r5 + 392), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801B1B4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1B74;
    }
}

loc_801B1B50:
{
    r0 = 9;
    r4 = 0x801B0000u;
    MemoryInline::FlatWriteRam8((r5 + 344), static_cast<uint8_t>(r0));
    r3 = (r5 + 8);
    r4 = (r4 + 6316);
    r5 = (r5 + 148);
    ctx->lr = 0x801B1B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8019CAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801B1B70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1BCC;
    }
}

loc_801B1B74:
{
    r30 = 0x80350000u;
    r30 = (r30 + -32160);
    r0 = MemoryInline::FlatRead32((r30 + 392));
}

loc_801B1B84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801B1B90;
    }
}

loc_801B1B88:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -25123), static_cast<uint8_t>(r0));
}

loc_801B1B90:
{
    r12 = MemoryInline::FlatRead32((r30 + 388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801B1B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1BC4;
    }
}

loc_801B1B9C:
{
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWriteRam32((r30 + 388), r31);
    ctr = r12;
    ctx->lr = 0x801B1BB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_801B1BB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B1BC4;
    }
}

loc_801B1BBC:
{
    r3 = r30;
    ctx->lr = 0x801B1BC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AAAA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801B1BC4:
{
    r0 = MemoryInline::FlatRead32((r30 + 392));
    MemoryInline::FlatWrite8((r13 + -25144), static_cast<uint8_t>(r0));
}

loc_801B1BCC:
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801B1AD0 func_801B1AD0 preserves=true fpr_mask=0x00000000
