#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FCA1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FCA1C;

loc_800FCA1C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = -1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    MemoryInline::FlatWrite8((r4 + 272), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 303), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 324), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 496), r0);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 500), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 512), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 516), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 508), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 504));
    ctx->lr = 0x800FCA8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 504), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 504), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 524), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 520));
    ctx->lr = 0x800FCAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 520), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 520), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 536), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 540), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 532), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 528));
    ctx->lr = 0x800FCAE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 528), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 528), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1512), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1516), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1508), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 1504));
    ctx->lr = 0x800FCB18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1504), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1504), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1528), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1532), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r3 + 1524), r31);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 1520));
    ctx->lr = 0x800FCB4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = r30;
    MemoryInline::FlatWrite32((r4 + 1520), r31);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r4 + 1520), r31);
    ctx->lr = 0x800FCB64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801039C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x800FCB6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80103954u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800FCB70:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FCBA8;
    }
}

loc_800FCB78:
{
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r1 + 8);
    r4 = 1;
    ctx->lr = 0x800FCB88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801012B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x800FCB90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801039C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 1480));
    ctx->lr = 0x800FCB98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EFE8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    ctx->lr = 0x800FCBA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    goto loc_800FCC4C;
}

loc_800FCBA8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 564), r0);
    goto loc_800FCBC0;
}

loc_800FCBB8:
{
    r3 = r30;
    ctx->lr = 0x800FCBC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801044C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FCBC0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r3 + 1476));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800FCBCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800FCBB8;
    }
}

loc_800FCBD0:
{
    r31 = 0;
    r4 = 0x80100000u;
    MemoryInline::FlatWrite32((r3 + 1476), r31);
    r3 = r30;
    r4 = (r4 + -13828);
    r5 = 0;
    r6 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32((r6 + 1488), r31);
    ctx->lr = 0x800FCBF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80106478u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    r0 = -1;
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 412), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 416), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 408), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 568), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 1468), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 1492), r31);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 572), r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite8((r4 + 952), static_cast<uint8_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite8((r4 + 1208), static_cast<uint8_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
    MemoryInline::FlatWrite32((r4 + 1584), r31);
}

loc_800FCC4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800FCA1C func_800FCA1C preserves=true fpr_mask=0x00000000
