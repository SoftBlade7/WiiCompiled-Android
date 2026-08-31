#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C78F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_806C78F4;

loc_806C78F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    f2.d = MemoryInline::FlatReadFloat64((r5 + -1464));
    r5 = 0x808C0000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -1504));
    r6 = MemoryInline::FlatRead16((r3 + 220));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r6 = (r6 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r3 + 220), static_cast<uint16_t>(r6));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 17176));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806C7950:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C799C;
    }
}

loc_806C7958:
{
    r5 = 0;
    r6 = 1;
    r4 = -1;
    r0 = 255;
    MemoryInline::FlatWrite16((r3 + 220), static_cast<uint16_t>(r4));
    r4 = (r3 + 212);
    MemoryInline::FlatWrite8((r3 + 222), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 223), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 212), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 213), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 214), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 215), static_cast<uint8_t>(r0));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 244));
    ctr = r12;
    ctx->lr = 0x806C7998u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_806C7A00;
}

loc_806C799C:
{
    r0 = -1;
    r5 = 0x808C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 8u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    r7 = 0;
    r6 = 255;
    r4 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    r3 = (r3 + 212);
    r0 = MemoryInline::FlatRead8((r5 + 17180));
    r5 = (r1 + 12);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r1 + 13), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r1 + 14), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r1 + 15), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r1 + 10), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r1 + 11), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805AED14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = (r31 + 212);
    r12 = MemoryInline::FlatRead32((r12 + 244));
    ctr = r12;
    ctx->lr = 0x806C7A00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_806C7A00:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEF8E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806C78F4 func_806C78F4 preserves=true fpr_mask=0x00000000
