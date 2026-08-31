#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807091AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807091AC;

loc_807091AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 220));
    r5 = MemoryInline::FlatRead32(r5);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r5 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807091D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807092A0;
    }
}

loc_807091D8:
{
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807091DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807092A0;
    }
}

loc_807091E0:
{
    r5 = MemoryInline::FlatRead32((r3 + 228));
}

loc_807091E8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(2))) {
        goto loc_807091F8;
    }
}

loc_807091EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 228));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_807091F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807092A0;
    }
}

loc_807091F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(120));
}

loc_80709204:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807092A0;
    }
}

loc_80709208:
{
    r4 = MemoryInline::FlatRead8((r3 + 212));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8070921C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070922C;
    }
}

loc_80709220:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r0));
    goto loc_807092A0;
}

loc_8070922C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r5 = 0x808A0000u;
    r4 = MemoryInline::FlatRead16((r31 + 156));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 228));
    r4 = (r4 + 427);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 5856));
    ctr = r12;
    ctx->lr = 0x80709250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80709260:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80709298;
    }
}

loc_80709264:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80709268:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709298;
    }
}

loc_8070926C:
{
    r4 = r3;
    r3 = (r1 + 8);
    ctx->lr = 0x80709278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009ACB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80709280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80709290;
    }
}

loc_80709284:
{
    r4 = 1;
    r5 = 1;
    ctx->lr = 0x80709290u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8009AA50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
}

loc_80709290:
{
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009ADC0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80709298:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 211), static_cast<uint8_t>(r0));
}

loc_807092A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807091AC func_807091AC preserves=true fpr_mask=0x00000000
