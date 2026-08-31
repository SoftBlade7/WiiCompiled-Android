#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80527778(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80527778;

loc_80527778:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (r4 * 240);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r4;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 3264), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r4 + 3280));
}

loc_805277A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805277F4;
    }
}

loc_805277AC:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 3264));
    r6 = 1;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 3265));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 33), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 32), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3266));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3267));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 35), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 34), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 3268));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 3269));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 37), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 36), static_cast<uint8_t>(r3));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 3270));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 3271));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 39), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 38), static_cast<uint8_t>(r3));
    goto loc_805277F8;
}

loc_805277F4:
{
    r6 = 0;
}

loc_805277F8:
{
}

loc_805277FC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80527A24;
    }
}

loc_80527800:
{
}

loc_80527804:
{
    r30 = r5;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80527814;
    }
}

loc_8052780C:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl0_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
}

loc_inl0_0x8051BEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF0:
{
}

loc_inl0_0x8051BEF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl0_cont_8051BED0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r30 = MemoryInline::FlatRead32((r3 + 3220));
}

loc_80527814:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r0 = MemoryInline::FlatRead8((r3 + 611));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80527824:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80527830;
    }
}

loc_80527828:
{
    r0 = -1;
    goto loc_80527868;
}

loc_80527830:
{
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    ctx->lr = 0x8052783Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80527840:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052784C;
    }
}

loc_80527844:
{
    r0 = 0;
    goto loc_80527868;
}

loc_8052784C:
{
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    ctx->lr = 0x80527858u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8052785C:
{
    r0 = -1;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80527868;
    }
}

loc_80527864:
{
    r0 = 1;
}

loc_80527868:
{
}

loc_8052786C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052787C;
    }
}

loc_80527870:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80527874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80527948;
    }
}

loc_80527878:
{
    goto loc_80527A18;
}

loc_8052787C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80527880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052788C;
    }
}

loc_80527884:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl1_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl1_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl1_cont_8051BED0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r30 = MemoryInline::FlatRead32((r3 + 3220));
}

loc_8052788C:
{
    r3 = (r1 + 32);
    r4 = (r1 + 10);
    ctx->lr = 0x80527898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052789C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805278A8;
    }
}

loc_805278A0:
{
    r31 = 0;
    goto loc_80527A1C;
}

loc_805278A8:
{
    r4 = r30;
    r3 = 184;
    r5 = 4;
    ctx->lr = 0x805278B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805278BC:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80527934;
    }
}

loc_805278C4:
{
    r4 = 0x808B0000u;
    r7 = 0x80890000u;
    r4 = (r4 + 12616);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 167u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    r8 = 0;
    r7 = (r7 + -672);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r8);
    r4 = -1;
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 164u, (r3 + 164), static_cast<uint8_t>(r8));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    r4 = MemoryInline::FlatRead8((r7 + 3));
    r7 = MemoryInline::FlatRead8(r7);
    MemoryInline::WriteResolved8(guest_range_1, 96u, (r3 + 96), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 97u, (r3 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 98u, (r3 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 99u, (r3 + 99), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 100), r8);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_1, 165u, (r3 + 165), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 166u, (r3 + 166), static_cast<uint8_t>(r8));
}

loc_80527934:
{
    r4 = MemoryInline::FlatRead16((r1 + 10));
    r3 = r31;
    r5 = -1;
    ctx->lr = 0x80527944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80526020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80527A1C;
}

loc_80527948:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8052794C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80527958;
    }
}

loc_80527950:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl2_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl2_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl2_cont_8051BED0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r30 = MemoryInline::FlatRead32((r3 + 3220));
}

loc_80527958:
{
    r3 = (r1 + 32);
    r4 = (r1 + 12);
    ctx->lr = 0x80527964u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80527968:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80527974;
    }
}

loc_8052796C:
{
    r31 = 0;
    goto loc_80527A1C;
}

loc_80527974:
{
    r4 = r30;
    r3 = 184;
    r5 = 4;
    ctx->lr = 0x80527984u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80527988:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80527A04;
    }
}

loc_80527990:
{
    r4 = 0x808B0000u;
    r7 = 0x80890000u;
    r4 = (r4 + 12616);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 167u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r4);
    r0 = 3;
    r8 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    r4 = -1;
    r7 = (r7 + -672);
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 164u, (r3 + 164), static_cast<uint8_t>(r8));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    r4 = MemoryInline::FlatRead8((r7 + 3));
    r7 = MemoryInline::FlatRead8(r7);
    MemoryInline::WriteResolved8(guest_range_2, 96u, (r3 + 96), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 97u, (r3 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 98u, (r3 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 99u, (r3 + 99), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_2, 100u, (r3 + 100), r8);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_2, 165u, (r3 + 165), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_2, 166u, (r3 + 166), static_cast<uint8_t>(r8));
}

loc_80527A04:
{
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r3 = r31;
    r5 = -1;
    ctx->lr = 0x80527A14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80526020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80527A1C;
}

loc_80527A18:
{
    r31 = 0;
}

loc_80527A1C:
{
    r3 = r31;
    goto loc_80527AF4;
}

loc_80527A24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80527A28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80527A34;
    }
}

loc_80527A2C:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl3_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl3_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl3_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl3_cont_8051BED0;
}

loc_inl3_return:
{
}

loc_inl3_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r5 = MemoryInline::FlatRead32((r3 + 3220));
}

loc_80527A34:
{
    r4 = r5;
    r3 = 184;
    r5 = 4;
    ctx->lr = 0x80527A44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80527A48:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80527AC4;
    }
}

loc_80527A50:
{
    r4 = 0x808B0000u;
    r7 = 0x80890000u;
    r4 = (r4 + 12616);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 167u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r4);
    r0 = 3;
    r8 = 0;
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r0);
    r4 = -1;
    r7 = (r7 + -672);
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r3 + 8), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r3 + 9), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 164u, (r3 + 164), static_cast<uint8_t>(r8));
    r6 = MemoryInline::FlatRead8((r7 + 1));
    r5 = MemoryInline::FlatRead8((r7 + 2));
    r4 = MemoryInline::FlatRead8((r7 + 3));
    r7 = MemoryInline::FlatRead8(r7);
    MemoryInline::WriteResolved8(guest_range_3, 96u, (r3 + 96), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 97u, (r3 + 97), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_3, 98u, (r3 + 98), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 99u, (r3 + 99), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_3, 100u, (r3 + 100), r8);
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_3, 165u, (r3 + 165), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_3, 166u, (r3 + 166), static_cast<uint8_t>(r8));
}

loc_80527AC4:
{
    r4 = 715849728;
    r3 = r31;
    r0 = (r4 + -21845);
    r5 = -1;
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r30))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 6);
    r0 = (r30 - r0);
    r4 = (r0 & 255);
    ctx->lr = 0x80527AF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80526020u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
}

loc_80527AF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80527778 func_80527778 preserves=true fpr_mask=0x00000000
