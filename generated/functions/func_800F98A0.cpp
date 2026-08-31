#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F98A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F98A0;

loc_800F98A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r8 = MemoryInline::FlatRead32((r3 + 8));
    r27 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r28 = r4;
    r29 = r5;
    r30 = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r8));
}

loc_800F98D0:
{
    r31 = r7;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9920;
    }
}

loc_800F98D8:
{
    r25 = (r8 + 1024);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = r25;
    ctx->lr = 0x800F98E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F98EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F98F8;
    }
}

loc_800F98F0:
{
    r0 = 0;
    goto loc_800F9910;
}

loc_800F98F8:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9900:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9908;
    }
}

loc_800F9904:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9908:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9910:
{
}

loc_800F9914:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9920;
    }
}

loc_800F9918:
{
    r5 = 0;
    goto loc_800F9940;
}

loc_800F9920:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r5 = 1;
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9940:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F9944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9B90;
    }
}

loc_800F9948:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9954:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F99B0;
    }
}

loc_800F995C:
{
    r3 = 1;
    goto loc_800F99E4;
}

loc_800F9968:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9978u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F997C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9988;
    }
}

loc_800F9980:
{
    r0 = 0;
    goto loc_800F99A0;
}

loc_800F9988:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9990:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9998;
    }
}

loc_800F9994:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9998:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F99A0:
{
}

loc_800F99A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F99B0;
    }
}

loc_800F99A8:
{
    r3 = 0;
    goto loc_800F99E4;
}

loc_800F99B0:
{
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r26));
}

loc_800F99C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9968;
    }
}

loc_800F99C4:
{
    r0 = MemoryInline::FlatRead32(r27);
    r4 = r28;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r3 = 1;
    r0 = (r0 + r26);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F99E4:
{
}

loc_800F99E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9B90;
    }
}

loc_800F99EC:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F99F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9A44;
    }
}

loc_800F99FC:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9A0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9A10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9A1C;
    }
}

loc_800F9A14:
{
    r0 = 0;
    goto loc_800F9A34;
}

loc_800F9A1C:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9A24:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9A2C;
    }
}

loc_800F9A28:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9A2C:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9A34:
{
}

loc_800F9A38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9A44;
    }
}

loc_800F9A3C:
{
    r5 = 0;
    goto loc_800F9A64;
}

loc_800F9A44:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r5 = 1;
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9A64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F9A68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9B90;
    }
}

loc_800F9A6C:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9A78:
{
    r26 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9AD4;
    }
}

loc_800F9A80:
{
    r3 = 1;
    goto loc_800F9B08;
}

loc_800F9A8C:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9A9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9AA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9AAC;
    }
}

loc_800F9AA4:
{
    r0 = 0;
    goto loc_800F9AC4;
}

loc_800F9AAC:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9AB4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9ABC;
    }
}

loc_800F9AB8:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9ABC:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9AC4:
{
}

loc_800F9AC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9AD4;
    }
}

loc_800F9ACC:
{
    r3 = 0;
    goto loc_800F9B08;
}

loc_800F9AD4:
{
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r26));
}

loc_800F9AE4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9A8C;
    }
}

loc_800F9AE8:
{
    r0 = MemoryInline::FlatRead32(r27);
    r4 = r29;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r3 = 1;
    r0 = (r0 + r26);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9B08:
{
}

loc_800F9B0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9B90;
    }
}

loc_800F9B10:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F9B1C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9B68;
    }
}

loc_800F9B20:
{
    r26 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r26;
    ctx->lr = 0x800F9B30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9B34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9B40;
    }
}

loc_800F9B38:
{
    r0 = 0;
    goto loc_800F9B58;
}

loc_800F9B40:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9B48:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9B50;
    }
}

loc_800F9B4C:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9B50:
{
    MemoryInline::FlatWrite32((r27 + 8), r26);
    r0 = 1;
}

loc_800F9B58:
{
}

loc_800F9B5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9B68;
    }
}

loc_800F9B60:
{
    r5 = 0;
    goto loc_800F9B88;
}

loc_800F9B68:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r5 = 1;
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9B88:
{
}

loc_800F9B8C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F9B98;
    }
}

loc_800F9B90:
{
    r0 = 0;
    goto loc_800F9B9C;
}

loc_800F9B98:
{
    r0 = 1;
}

loc_800F9B9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F9BA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F9BAC;
    }
}

loc_800F9BA4:
{
    r3 = 0;
    goto loc_800F9FF4;
}

loc_800F9BAC:
{
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 16);
    r6 = 0;
    // inline leaf 0x800F3528 (4 guest instruction(s))
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
    MemoryInline::FlatWriteRam32((r3 + 8), r6);
    // end of inlined leaf 0x800F3528
    r31 = 0;
    goto loc_800F9C78;
}

loc_800F9BC8:
{
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r31));
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9BD8:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9C34;
    }
}

loc_800F9BE0:
{
    r3 = 1;
    goto loc_800F9C68;
}

loc_800F9BEC:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9BFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9C00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9C0C;
    }
}

loc_800F9C04:
{
    r0 = 0;
    goto loc_800F9C24;
}

loc_800F9C0C:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9C14:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9C1C;
    }
}

loc_800F9C18:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9C1C:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9C24:
{
}

loc_800F9C28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9C34;
    }
}

loc_800F9C2C:
{
    r3 = 0;
    goto loc_800F9C68;
}

loc_800F9C34:
{
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_800F9C44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9BEC;
    }
}

loc_800F9C48:
{
    r0 = MemoryInline::FlatRead32(r27);
    r4 = (r1 + 8);
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r3 = 1;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9C68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F9C6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F9C78;
    }
}

loc_800F9C70:
{
    r3 = 0;
    goto loc_800F9FF4;
}

loc_800F9C78:
{
    r3 = (r1 + 16);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3538u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F9C88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F9BC8;
    }
}

loc_800F9C8C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F9C98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9CE4;
    }
}

loc_800F9C9C:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9CACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9CB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9CBC;
    }
}

loc_800F9CB4:
{
    r0 = 0;
    goto loc_800F9CD4;
}

loc_800F9CBC:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9CC4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9CCC;
    }
}

loc_800F9CC8:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9CCC:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9CD4:
{
}

loc_800F9CD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9CE4;
    }
}

loc_800F9CDC:
{
    r5 = 0;
    goto loc_800F9D04;
}

loc_800F9CE4:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 60;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r5 = 1;
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9D04:
{
}

loc_800F9D08:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800F9FD4;
    }
}

loc_800F9D0C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F9D18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9D64;
    }
}

loc_800F9D1C:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9D2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9D30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9D3C;
    }
}

loc_800F9D34:
{
    r0 = 0;
    goto loc_800F9D54;
}

loc_800F9D3C:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9D44:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9D4C;
    }
}

loc_800F9D48:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9D4C:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9D54:
{
}

loc_800F9D58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9D64;
    }
}

loc_800F9D5C:
{
    r5 = 0;
    goto loc_800F9D84;
}

loc_800F9D64:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 47;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r5 = 1;
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_11, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F9D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9FD4;
    }
}

loc_800F9D8C:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9D98:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9DF4;
    }
}

loc_800F9DA0:
{
    r3 = 1;
    goto loc_800F9E28;
}

loc_800F9DAC:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9DBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9DC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9DCC;
    }
}

loc_800F9DC4:
{
    r0 = 0;
    goto loc_800F9DE4;
}

loc_800F9DCC:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9DD4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9DDC;
    }
}

loc_800F9DD8:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9DDC:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9DE4:
{
}

loc_800F9DE8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9DF4;
    }
}

loc_800F9DEC:
{
    r3 = 0;
    goto loc_800F9E28;
}

loc_800F9DF4:
{
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r30));
}

loc_800F9E04:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9DAC;
    }
}

loc_800F9E08:
{
    r0 = MemoryInline::FlatRead32(r27);
    r4 = r28;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r3 = 1;
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9E28:
{
}

loc_800F9E2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9FD4;
    }
}

loc_800F9E30:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F9E3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9E88;
    }
}

loc_800F9E40:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9E50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9E54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9E60;
    }
}

loc_800F9E58:
{
    r0 = 0;
    goto loc_800F9E78;
}

loc_800F9E60:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9E68:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9E70;
    }
}

loc_800F9E6C:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9E70:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9E78:
{
}

loc_800F9E7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9E88;
    }
}

loc_800F9E80:
{
    r5 = 0;
    goto loc_800F9EA8;
}

loc_800F9E88:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 58;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r5 = 1;
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_13, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9EA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F9EAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F9FD4;
    }
}

loc_800F9EB0:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F9EBC:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9F18;
    }
}

loc_800F9EC4:
{
    r3 = 1;
    goto loc_800F9F4C;
}

loc_800F9ED0:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9EE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9EE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9EF0;
    }
}

loc_800F9EE8:
{
    r0 = 0;
    goto loc_800F9F08;
}

loc_800F9EF0:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9EF8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9F00;
    }
}

loc_800F9EFC:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9F00:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9F08:
{
}

loc_800F9F0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9F18;
    }
}

loc_800F9F10:
{
    r3 = 0;
    goto loc_800F9F4C;
}

loc_800F9F18:
{
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = (r3 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F9F28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F9ED0;
    }
}

loc_800F9F2C:
{
    r0 = MemoryInline::FlatRead32(r27);
    r4 = r29;
    r3 = (r0 + r5);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r3 = 1;
    r0 = (r0 + r28);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9F4C:
{
}

loc_800F9F50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F9FD4;
    }
}

loc_800F9F54:
{
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_800F9F60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F9FAC;
    }
}

loc_800F9F64:
{
    r25 = (r3 + 1024);
    r3 = MemoryInline::FlatRead32(r27);
    r4 = r25;
    ctx->lr = 0x800F9F74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3870u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800F9F78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F9F84;
    }
}

loc_800F9F7C:
{
    r0 = 0;
    goto loc_800F9F9C;
}

loc_800F9F84:
{
    r0 = MemoryInline::FlatRead32(r27);
}

loc_800F9F8C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800F9F94;
    }
}

loc_800F9F90:
{
    MemoryInline::FlatWrite32(r27, r3);
}

loc_800F9F94:
{
    MemoryInline::FlatWrite32((r27 + 8), r25);
    r0 = 1;
}

loc_800F9F9C:
{
}

loc_800F9FA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F9FAC;
    }
}

loc_800F9FA4:
{
    r5 = 0;
    goto loc_800F9FCC;
}

loc_800F9FAC:
{
    r3 = MemoryInline::FlatRead32(r27);
    r4 = 62;
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r5 = 1;
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite8(r3_addr_15, static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_800F9FCC:
{
}

loc_800F9FD0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800F9FDC;
    }
}

loc_800F9FD4:
{
    r0 = 0;
    goto loc_800F9FE0;
}

loc_800F9FDC:
{
    r0 = 1;
}

loc_800F9FE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F9FE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F9FF0;
    }
}

loc_800F9FE8:
{
    r3 = 0;
    goto loc_800F9FF4;
}

loc_800F9FF0:
{
    r3 = 1;
}

loc_800F9FF4:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F98A0 func_800F98A0 preserves=true fpr_mask=0x00000000
