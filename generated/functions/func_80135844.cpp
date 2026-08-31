#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80135844(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80135844;

loc_80135844:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 6;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    ctx->lr = 0x8013586Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801477B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = 0x80330000u;
    r4 = 0;
    r3 = (r31 + 24648);
    r5 = 560;
    ctx->lr = 0x80135880u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r29 + 8));
    r3 = (r13 + -29592);
    ctx->lr = 0x8013588Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80147DF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x80130000u;
    r3 = (r3 + 27892);
    ctx->lr = 0x80135898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801477FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013589C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80135980;
    }
}

loc_801358A0:
{
    r4 = MemoryInline::FlatRead32((r29 + 48));
    r12 = (r31 + 24648);
    r3 = 0;
    r0 = 2;
    MemoryInline::FlatWriteRam32((r12 + 548), r4);
    r29 = 0;
    r11 = 1;
    r10 = 255;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r9 = 16;
    ctr = r0;
}

loc_801358CC:
{
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
    r3 = (r3_rot_2 & 8160);
    r0 = (r29 & 255);
    r31 = (r12 + r3);
    r8 = (r29 + 1);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 34), 0, 235u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r31 + 44), static_cast<uint8_t>(r11));
    r30 = (r12 + r0);
    r7 = (r29 + 2);
    r6 = (r29 + 3);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r31 + 38), static_cast<uint8_t>(r10));
    r5 = (r29 + 4);
    r4 = (r29 + 5);
    r3 = (r29 + 6);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 34), static_cast<uint8_t>(r29));
    r0 = (r29 + 7);
    r29 = (r29 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 532), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r30 + 532), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r31 + 76), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r31 + 70), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r31 + 66), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r30 + 533), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r31 + 108), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r31 + 102), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r31 + 98), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r30 + 534), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 106u, (r31 + 140), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 100u, (r31 + 134), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 96u, (r31 + 130), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r30 + 535), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 138u, (r31 + 172), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 132u, (r31 + 166), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 128u, (r31 + 162), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r30 + 536), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 170u, (r31 + 204), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 164u, (r31 + 198), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 160u, (r31 + 194), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r30 + 537), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 202u, (r31 + 236), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 196u, (r31 + 230), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 192u, (r31 + 226), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r30 + 538), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 234u, (r31 + 268), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 228u, (r31 + 262), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 224u, (r31 + 258), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r30 + 539), static_cast<uint8_t>(r9));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801358CC;
    }
}

loc_80135980:
{
    r5 = 0x80330000u;
    r4 = (r1 + 8);
    r5 = (r5 + 24648);
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r5 + 548));
    ctr = r12;
    ctx->lr = 0x8013599Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x80135844 func_80135844 preserves=true fpr_mask=0x00000000
