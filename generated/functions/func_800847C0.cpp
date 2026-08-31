#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800847C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800847C0;

loc_800847C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r3 = -872349696;
    guest_range_0 = MemoryInline::ResolveRangeHost(r27, 0, 8u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
}

loc_80084808:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8008481C;
    }
}

loc_80084814:
{
    r0 = MemoryInline::FlatRead32(r31);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_8008481C:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80084820:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80084934;
    }
}

loc_80084828:
{
}

loc_8008482C:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_80084900;
    }
}

loc_80084834:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80084850;
    }
}

loc_8008483C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80084848:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_80084850;
    }
}

loc_8008484C:
{
    r5 = 1;
}

loc_80084850:
{
}

loc_80084854:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80084900;
    }
}

loc_80084858:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_80084870:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80084900;
    }
}

loc_80084874:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r5);
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r5 + 32));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r5 + 36));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r5 + 64));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r5 + 68));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 96u, (r5 + 96));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r5 + 100));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r5 + 128));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 132u, (r5 + 132));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 160u, (r5 + 160));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 164u, (r5 + 164));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 192u, (r5 + 192));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 196u, (r5 + 196));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 224u, (r5 + 224));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 228u, (r5 + 228));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80084874;
    }
}

loc_80084900:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_1 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
}

loc_80084918:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_80084934;
    }
}

loc_8008491C:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8008491C;
    }
}

loc_80084934:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80084944:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80084960;
    }
}

loc_80084958:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_80084960:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80084964:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80084A78;
    }
}

loc_8008496C:
{
}

loc_80084970:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_80084A44;
    }
}

loc_80084978:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80084994;
    }
}

loc_80084980:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8008498C:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_80084994;
    }
}

loc_80084990:
{
    r5 = 1;
}

loc_80084994:
{
}

loc_80084998:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80084A44;
    }
}

loc_8008499C:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_800849B4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80084A44;
    }
}

loc_800849B8:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r5 + 8));
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r5 + 12));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r5 + 40));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r5 + 44));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r5 + 72));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 68u, (r5 + 76));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 96u, (r5 + 104));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 100u, (r5 + 108));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 128u, (r5 + 136));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 132u, (r5 + 140));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 160u, (r5 + 168));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 164u, (r5 + 172));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 192u, (r5 + 200));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 196u, (r5 + 204));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 224u, (r5 + 232));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 228u, (r5 + 236));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800849B8;
    }
}

loc_80084A44:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_3 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
}

loc_80084A5C:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_80084A78;
    }
}

loc_80084A60:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80084A60;
    }
}

loc_80084A78:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80084A88:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80084AAC;
    }
}

loc_80084AA4:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_80084AAC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80084AB0:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80084BC4;
    }
}

loc_80084AB8:
{
}

loc_80084ABC:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_80084B90;
    }
}

loc_80084AC4:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80084AE0;
    }
}

loc_80084ACC:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80084AD8:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_80084AE0;
    }
}

loc_80084ADC:
{
    r5 = 1;
}

loc_80084AE0:
{
}

loc_80084AE4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80084B90;
    }
}

loc_80084AE8:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_80084B00:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80084B90;
    }
}

loc_80084B04:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 24), 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r5 + 24));
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r5 + 28));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r5 + 56));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r5 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 64u, (r5 + 88));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r5 + 92));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 96u, (r5 + 120));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 100u, (r5 + 124));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 128u, (r5 + 152));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 132u, (r5 + 156));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 160u, (r5 + 184));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 164u, (r5 + 188));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 192u, (r5 + 216));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 196u, (r5 + 220));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 224u, (r5 + 248));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 228u, (r5 + 252));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80084B04;
    }
}

loc_80084B90:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_5 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
}

loc_80084BA8:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_80084BC4;
    }
}

loc_80084BAC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80084BAC;
    }
}

loc_80084BC4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 4));
    r3 = -872349696;
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80084BD4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r27);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80084BF0;
    }
}

loc_80084BE8:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_80084BF0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80084BF4:
{
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80084D08;
    }
}

loc_80084BFC:
{
}

loc_80084C00:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_80084CD4;
    }
}

loc_80084C08:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80084C24;
    }
}

loc_80084C10:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_80084C1C:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_80084C24;
    }
}

loc_80084C20:
{
    r5 = 1;
}

loc_80084C24:
{
}

loc_80084C28:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80084CD4;
    }
}

loc_80084C2C:
{
    r0 = (r4 + 7);
    r5 = r30;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_10 & 536870911);
    r3 = -872349696;
    ctr = r0;
}

loc_80084C44:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80084CD4;
    }
}

loc_80084C48:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 232u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, (r5 + 16));
    r6 = (r6 + 8);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r5 + 20));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r5 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 36u, (r5 + 52));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 64u, (r5 + 80));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r5 + 84));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 96u, (r5 + 112));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 100u, (r5 + 116));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 128u, (r5 + 144));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 132u, (r5 + 148));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 160u, (r5 + 176));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 164u, (r5 + 180));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 192u, (r5 + 208));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 196u, (r5 + 212));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 224u, (r5 + 240));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 228u, (r5 + 244));
    r5 = (r5 + 256);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80084C48;
    }
}

loc_80084CD4:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r3 = (r3_rot_7 & -32);
    r0 = (r29 - r6);
    r4 = (r30 + r3);
    r3 = -872349696;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r29));
}

loc_80084CEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80084D08;
    }
}

loc_80084CF0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    r4 = (r4 + 32);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80084CF0;
    }
}

loc_80084D08:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF800087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800847C0 func_800847C0 preserves=true fpr_mask=0x00000000
