#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066A7BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8066A7BC;

loc_8066A7BC:
{
    r4 = 0x808B0000u;
    r0 = 0;
    r4 = (r4 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 264), r4);
    MemoryInline::FlatWriteRam16((r1 + 268), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 270), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 272), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8066A7E4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8066A804;
    }
}

loc_8066A7E8:
{
    r4 = 65536;
    r5 = (r0 & 255);
    r0 = (r4 + -27664);
    r0 = (r0 * r5);
    r4 = (r3 + r0);
    r6 = (r4 + 56);
    goto loc_8066A808;
}

loc_8066A804:
{
    r6 = 0;
}

loc_8066A808:
{
    r0 = MemoryInline::FlatRead32((r27 + 16884));
}

loc_8066A810:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8066A850;
    }
}

loc_8066A814:
{
    r4 = (r27 + 65536);
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r4 = MemoryInline::FlatRead32((r4 + -29952));
}

loc_8066A824:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_8066A850;
    }
}

loc_8066A828:
{
    r0 = MemoryInline::FlatRead8((r27 + 85));
}

loc_8066A830:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8066A840;
    }
}

loc_8066A834:
{
}

loc_8066A838:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8066A848;
    }
}

loc_8066A83C:
{
    goto loc_8066A850;
}

loc_8066A840:
{
    r0 = 1;
    goto loc_8066A854;
}

loc_8066A848:
{
    r0 = 2;
    goto loc_8066A854;
}

loc_8066A850:
{
    r0 = 3;
}

loc_8066A854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8066A858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A938;
    }
}

loc_8066A85C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 22820), 0, 24u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 22840));
    r5 = 0;
    r0 = MemoryInline::FlatRead32((r27 + 88));
}

loc_8066A86C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8066A880;
    }
}

loc_8066A870:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 22826));
}

loc_8066A878:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8066A880;
    }
}

loc_8066A87C:
{
    r5 = 1;
}

loc_8066A880:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8066A884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A92C;
    }
}

loc_8066A888:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r6 + 22820));
    r4 = 65536;
    MemoryInline::FlatWriteRam16((r1 + 268), static_cast<uint16_t>(r0));
    r0 = (r4 + -27664);
    r4 = (r1 + 12);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r6 + 22822));
    MemoryInline::FlatWriteRam8((r1 + 270), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r6 + 22824));
    MemoryInline::FlatWriteRam16((r1 + 272), static_cast<uint16_t>(r5));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r6 + 22826));
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r5));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 22828));
    MemoryInline::FlatWriteRam32((r1 + 276), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 22832));
    MemoryInline::FlatWriteRam32((r1 + 280), r5);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 22836));
    MemoryInline::FlatWriteRam32((r1 + 284), r5);
    r5 = MemoryInline::FlatRead16((r3 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r5 = (r5 & 255);
    r0 = (r0 * r5);
    r3 = (r3 + r0);
    r26 = (r3 + 78);
    r3 = r26;
    ctx->lr = 0x8066A8E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A8EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A904;
    }
}

loc_8066A8F0:
{
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r1 + 188);
    r4 = 0;
    ctx->lr = 0x8066A900u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8066A940;
}

loc_8066A904:
{
    r3 = r26;
    r4 = (r1 + 12);
    ctx->lr = 0x8066A910u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A940;
    }
}

loc_8066A918:
{
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r1 + 188);
    r4 = 6;
    ctx->lr = 0x8066A928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8066A940;
}

loc_8066A92C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r0));
    goto loc_8066A940;
}

loc_8066A938:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 274), static_cast<uint8_t>(r0));
}

loc_8066A940:
{
    r0 = MemoryInline::FlatRead16((r27 + 86));
    r3 = 1;
    MemoryInline::FlatWrite32((r27 + 16909), r3);
    r3 = 0x809C0000u;
    r28 = (r27 + 16909);
    r4 = (r1 + 16);
    MemoryInline::FlatWrite32((r27 + 16913), r0);
    r0 = MemoryInline::FlatRead16((r1 + 268));
    r5 = MemoryInline::FlatRead8((r1 + 270));
    r0 = (r0 * 60);
    r6 = MemoryInline::FlatRead16((r1 + 272));
    r0 = (r5 + r0);
    r0 = (r0 * 1000);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r27 + 17041), r0);
    r0 = MemoryInline::FlatRead32((r1 + 284));
    MemoryInline::FlatWrite8((r27 + 17245), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    MemoryInline::FlatWrite8((r27 + 17246), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 280));
    MemoryInline::FlatWrite8((r27 + 17247), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A9A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A9AC;
    }
}

loc_8066A9A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    goto loc_8066A9B0;
}

loc_8066A9AC:
{
    r0 = 0;
}

loc_8066A9B0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWrite8((r28 + 339), static_cast<uint8_t>(r0));
    r4 = 0x809C0000u;
    r3 = 65536;
    r5 = MemoryInline::FlatRead32((r4 + -10424));
    r0 = (r3 + -27664);
    r4 = (r1 + 10);
    r3 = MemoryInline::FlatRead16((r5 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 & 255);
    r0 = (r0 * r3);
    r3 = (r5 + r0);
    r26 = (r3 + 78);
    r3 = r26;
    ctx->lr = 0x8066A9E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A9EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AA04;
    }
}

loc_8066A9F0:
{
    r5 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r28 + 260);
    r4 = 0;
    ctx->lr = 0x8066AA00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8066AA28;
}

loc_8066AA04:
{
    r3 = r26;
    r4 = (r1 + 10);
    ctx->lr = 0x8066AA10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CA820u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AA14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AA28;
    }
}

loc_8066AA18:
{
    r5 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r28 + 260);
    r4 = 6;
    ctx->lr = 0x8066AA28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8066AA28:
{
    r29 = 0x809C0000u;
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r29 + 8512));
    r5 = 1;
    ctx->lr = 0x8066AA3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806775E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066AA40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066AA50;
    }
}

loc_8066AA44:
{
    r0 = 8;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066AA50:
{
    r3 = r27;
    ctx->lr = 0x8066AA58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067552Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 8512));
    ctx->lr = 0x8066AA60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067721Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
}

loc_8066AD88:
{
    r26 = MemoryInline::FlatRead32((r1 + 600));
    r27 = MemoryInline::FlatRead32((r1 + 604));
    r28 = MemoryInline::FlatRead32((r1 + 608));
    r29 = MemoryInline::FlatRead32((r1 + 612));
    r30 = MemoryInline::FlatRead32((r1 + 616));
    r31 = MemoryInline::FlatRead32((r1 + 620));
    r0 = MemoryInline::FlatRead32((r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066A7BC func_8066A7BC preserves=true fpr_mask=0x00000000
