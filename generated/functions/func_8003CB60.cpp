#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8003CB60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8003CB60;

loc_8003CB60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8003CB78:
{
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003CBA4;
    }
}

loc_8003CB90:
{
    r0 = MemoryInline::FlatRead8((r4 + 151));
    r6 = MemoryInline::FlatRead32((r3 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8003CB9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003CBA4;
    }
}

loc_8003CBA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CBD4;
    }
}

loc_8003CBA4:
{
    r0 = MemoryInline::FlatRead8((r4 + 151));
    MemoryInline::FlatWrite32((r3 + 176), r0);
    r0 = MemoryInline::FlatRead8((r4 + 151));
    MemoryInline::FlatWrite32((r3 + 180), r0);
    r3 = MemoryInline::FlatRead8((r5 + 2));
    r4 = MemoryInline::FlatRead8((r4 + 151));
    r5 = MemoryInline::FlatRead8((r5 + 4));
    r6 = MemoryInline::FlatRead8((r28 + 3));
    r7 = MemoryInline::FlatRead8((r27 + 152));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80172088u>(ctx);
    r31 = 1;
    goto loc_8003CBD8;
}

loc_8003CBD4:
{
    r31 = 0;
}

loc_8003CBD8:
{
    r3 = r26;
    r4 = r27;
    r5 = r28;
    r6 = r30;
    ctx->lr = 0x8003CBECu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8003D000u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8003CBF0:
{
    r31 = 0;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003CC00;
    }
}

loc_8003CBF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8003CBFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CC04;
    }
}

loc_8003CC00:
{
    r31 = 1;
}

loc_8003CC04:
{
    r3 = r26;
    r4 = r27;
    r5 = r28;
    r6 = r29;
    r7 = r30;
    ctx->lr = 0x8003CC1Cu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8003D830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8003CC20:
{
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CC34;
    }
}

loc_8003CC28:
{
}

loc_8003CC2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8003CC34;
    }
}

loc_8003CC30:
{
    r31 = 1;
}

loc_8003CC34:
{
    r0 = MemoryInline::FlatRead16(r28);
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003CC3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003CFE4;
    }
}

loc_8003CC40:
{
    r3 = MemoryInline::FlatRead32((r27 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -16284));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8003CC5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8003CC64;
    }
}

loc_8003CC60:
{
    goto loc_8003CFE4;
}

loc_8003CC64:
{
    r4 = (r1 + 36);
    r3 = 9;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D9F0u>(ctx);
    r4 = (r1 + 24);
    r3 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D9F0u>(ctx);
    r4 = (r1 + 12);
    r3 = 13;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D9F0u>(ctx);
    r5 = (r1 + 40);
    r6 = (r1 + 44);
    r7 = (r1 + 8);
    r3 = 0;
    r4 = 9;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016E04Cu>(ctx);
    r5 = (r1 + 28);
    r6 = (r1 + 32);
    r7 = (r1 + 8);
    r3 = 0;
    r4 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016E04Cu>(ctx);
    r5 = (r1 + 16);
    r6 = (r1 + 20);
    r7 = (r1 + 8);
    r3 = 0;
    r4 = 13;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016E04Cu>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8003CCD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFE4;
    }
}

loc_8003CCD8:
{
    r3 = 152;
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r0 = 8;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
            r6 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    r4 = 0;
    r7 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
    r3 = -872349696;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 28));
        }
    }
    r10 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
            r12 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
    ctr = r0;
    // nop
}

loc_8003CD20:
{
}

loc_8003CD24:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8003CD3C;
    }
}

loc_8003CD28:
{
}

loc_8003CD2C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8003CE48;
    }
}

loc_8003CD30:
{
}

loc_8003CD34:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(3))) {
        goto loc_8003CE50;
    }
}

loc_8003CD38:
{
    goto loc_8003CE54;
}

loc_8003CD3C:
{
}

loc_8003CD40:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_8003CD50;
    }
}

loc_8003CD44:
{
}

loc_8003CD48:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8003CDD8;
    }
}

loc_8003CD4C:
{
    goto loc_8003CE54;
}

loc_8003CD50:
{
}

loc_8003CD54:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8003CD7C;
    }
}

loc_8003CD58:
{
}

loc_8003CD5C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1))) {
        goto loc_8003CD8C;
    }
}

loc_8003CD60:
{
}

loc_8003CD64:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(2))) {
        goto loc_8003CD9C;
    }
}

loc_8003CD68:
{
}

loc_8003CD6C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(3))) {
        goto loc_8003CDAC;
    }
}

loc_8003CD70:
{
}

loc_8003CD74:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(4))) {
        goto loc_8003CDBC;
    }
}

loc_8003CD78:
{
    goto loc_8003CE54;
}

loc_8003CD7C:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CE54;
}

loc_8003CD8C:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CE54;
}

loc_8003CD9C:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CE54;
}

loc_8003CDAC:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CE54;
}

loc_8003CDBC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    goto loc_8003CE54;
}

loc_8003CDD8:
{
}

loc_8003CDDC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8003CE04;
    }
}

loc_8003CDE0:
{
}

loc_8003CDE4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1))) {
        goto loc_8003CE10;
    }
}

loc_8003CDE8:
{
}

loc_8003CDEC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(2))) {
        goto loc_8003CE1C;
    }
}

loc_8003CDF0:
{
}

loc_8003CDF4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(3))) {
        goto loc_8003CE28;
    }
}

loc_8003CDF8:
{
}

loc_8003CDFC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(4))) {
        goto loc_8003CE34;
    }
}

loc_8003CE00:
{
    goto loc_8003CE54;
}

loc_8003CE04:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CE54;
}

loc_8003CE10:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CE54;
}

loc_8003CE1C:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CE54;
}

loc_8003CE28:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CE54;
}

loc_8003CE34:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    goto loc_8003CE54;
}

loc_8003CE48:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CE54;
}

loc_8003CE50:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
}

loc_8003CE54:
{
}

loc_8003CE58:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(1))) {
        goto loc_8003CE70;
    }
}

loc_8003CE5C:
{
}

loc_8003CE60:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(2))) {
        goto loc_8003CED0;
    }
}

loc_8003CE64:
{
}

loc_8003CE68:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(3))) {
        goto loc_8003CED8;
    }
}

loc_8003CE6C:
{
    goto loc_8003CEDC;
}

loc_8003CE70:
{
}

loc_8003CE74:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8003CEDC;
    }
}

loc_8003CE78:
{
}

loc_8003CE7C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(1))) {
        goto loc_8003CE94;
    }
}

loc_8003CE80:
{
}

loc_8003CE84:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(3))) {
        goto loc_8003CEA4;
    }
}

loc_8003CE88:
{
}

loc_8003CE8C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(4))) {
        goto loc_8003CEB4;
    }
}

loc_8003CE90:
{
    goto loc_8003CEDC;
}

loc_8003CE94:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CEDC;
}

loc_8003CEA4:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CEDC;
}

loc_8003CEB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    goto loc_8003CEDC;
}

loc_8003CED0:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CEDC;
}

loc_8003CED8:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
}

loc_8003CEDC:
{
}

loc_8003CEE0:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(1))) {
        goto loc_8003CEF8;
    }
}

loc_8003CEE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(2));
}

loc_8003CEE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFD4;
    }
}

loc_8003CEEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r11), static_cast<int32_t>(3));
}

loc_8003CEF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFDC;
    }
}

loc_8003CEF4:
{
    goto loc_8003CFE0;
}

loc_8003CEF8:
{
}

loc_8003CEFC:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(1))) {
        goto loc_8003CF0C;
    }
}

loc_8003CF00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_8003CF04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CF7C;
    }
}

loc_8003CF08:
{
    goto loc_8003CFE0;
}

loc_8003CF0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8003CF10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CF38;
    }
}

loc_8003CF14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_8003CF18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CF44;
    }
}

loc_8003CF1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8003CF20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CF50;
    }
}

loc_8003CF24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_8003CF28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CF5C;
    }
}

loc_8003CF2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_8003CF30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CF68;
    }
}

loc_8003CF34:
{
    goto loc_8003CFE0;
}

loc_8003CF38:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CF44:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CF50:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CF5C:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CF68:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    goto loc_8003CFE0;
}

loc_8003CF7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8003CF80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFA8;
    }
}

loc_8003CF84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_8003CF88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFB0;
    }
}

loc_8003CF8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8003CF90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFB8;
    }
}

loc_8003CF94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_8003CF98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFC0;
    }
}

loc_8003CF9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_8003CFA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8003CFC8;
    }
}

loc_8003CFA4:
{
    goto loc_8003CFE0;
}

loc_8003CFA8:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CFB0:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CFB8:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CFC0:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CFC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30260));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    goto loc_8003CFE0;
}

loc_8003CFD4:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    goto loc_8003CFE0;
}

loc_8003CFDC:
{
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r4));
}

loc_8003CFE0:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8003CD20;
    }
}

loc_8003CFE4:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8003CB60 func_8003CB60 preserves=true fpr_mask=0x00000000
