#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A5EB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_800A5EB0;

loc_800A5EB0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 196), r0);
    r11 = (r1 + 192);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 164u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 168u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 172u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 176u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 180u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 184u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r26 = r3;
    ctx->lr = 0x800A5ECCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800A5ED4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7EE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r0 = MemoryInline::FlatRead8((r26 + 287));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A5EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5EF4;
    }
}

loc_800A5EE0:
{
    ctx->lr = 0x800A5EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800A5EECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r3 = 0;
    goto loc_800A622C;
}

loc_800A5EF4:
{
    r0 = MemoryInline::FlatRead8((r26 + 286));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A5EFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A621C;
    }
}

loc_800A5F00:
{
    r4 = MemoryInline::FlatRead32((r26 + 2096));
    r3 = r26;
    ctx->lr = 0x800A5F0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A6DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A5F10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5F64;
    }
}

loc_800A5F14:
{
    r28 = r26;
    r27 = 0;
    r25 = 0;
    goto loc_800A5F44;
}

loc_800A5F24:
{
    r4 = MemoryInline::FlatRead32((r28 + 2100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800A5F2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A5F3C;
    }
}

loc_800A5F30:
{
    r3 = MemoryInline::FlatRead32((r26 + 2080));
    ctx->lr = 0x800A5F38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4E10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r28 + 2100), r25);
}

loc_800A5F3C:
{
    r28 = (r28 + 52);
    r27 = (r27 + 1);
}

loc_800A5F44:
{
    r0 = MemoryInline::FlatRead32((r26 + 2092));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_800A5F4C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A5F24;
    }
}

loc_800A5F50:
{
    ctx->lr = 0x800A5F54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800A5F5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r3 = 0;
    goto loc_800A622C;
}

loc_800A5F64:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = r26;
    r4 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x800A5F88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A7E00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A5F8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A5FA4;
    }
}

loc_800A5F90:
{
    ctx->lr = 0x800A5F94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800A5F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r3 = 0;
    goto loc_800A622C;
}

loc_800A5FA4:
{
    r3 = MemoryInline::FlatRead32((r26 + 312));
    r29 = 0;
    r0 = MemoryInline::FlatRead32((r26 + 336));
    r4 = MemoryInline::FlatRead32((r26 + 220));
    r5 = (r3 * r0);
    r3 = MemoryInline::FlatRead32((r26 + 300));
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_800A5FC4:
{
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r26 + 300), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_800A5FE4;
    }
}

loc_800A5FD0:
{
}

loc_800A5FD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_800A6004;
    }
}

loc_800A5FD8:
{
}

loc_800A5FDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_800A600C;
    }
}

loc_800A5FE0:
{
    goto loc_800A6010;
}

loc_800A5FE4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r3 = (r5 & 7);
}

loc_800A5FEC:
{
    r29 = (r0 * 14);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A6010;
    }
}

loc_800A5FF4:
{
    r0 = (r3 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r29 = (r29 + r0);
    goto loc_800A6010;
}

loc_800A6004:
{
    r29 = r5;
    goto loc_800A6010;
}

loc_800A600C:
{
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r29 = (r29_rot_1 & 2147483647);
}

loc_800A6010:
{
    r28 = (r26 + 2932);
    r27 = 0;
    r30 = 1;
    r31 = 0;
    goto loc_800A61C4;
}

loc_800A6024:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_800A602C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A61BC;
    }
}

loc_800A6030:
{
    r0 = MemoryInline::FlatRead32((r26 + 220));
    r4 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r5 = 0;
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r0 = MemoryInline::FlatRead32((r26 + 232));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r31);
    MemoryInline::FlatWriteRam32((r1 + 44), r29);
    goto loc_800A6170;
}

loc_800A6060:
{
}

loc_800A6064:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(2))) {
        goto loc_800A6070;
    }
}

loc_800A6068:
{
    r3 = 0;
    goto loc_800A6094;
}

loc_800A6070:
{
    r3 = (r28 + r5);
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_800A607C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(16))) {
        goto loc_800A6088;
    }
}

loc_800A6080:
{
    r3 = 0;
    goto loc_800A6094;
}

loc_800A6088:
{
    r0 = (r0 * 52);
    r3 = (r26 + r0);
    r3 = (r3 + 2100);
}

loc_800A6094:
{
}

loc_800A6098:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A6168;
    }
}

loc_800A609C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 50u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 50u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 4u, (r4 + 4), r6);
        MemoryInline::WriteResolved16(guest_range_2, 6u, (r4 + 6), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r3 + 10));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 8u, (r4 + 8), r6);
        MemoryInline::WriteResolved16(guest_range_2, 10u, (r4 + 10), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r3 + 14));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r3 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 12u, (r4 + 12), r6);
        MemoryInline::WriteResolved16(guest_range_2, 14u, (r4 + 14), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r3 + 18));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r3 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 16u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 16u, (r4 + 16), r6);
        MemoryInline::WriteResolved16(guest_range_2, 18u, (r4 + 18), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r3 + 22));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r3 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 20u, (r4 + 20), r6);
        MemoryInline::WriteResolved16(guest_range_2, 22u, (r4 + 22), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r3 + 26));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r3 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 24u, (r4 + 24), r6);
        MemoryInline::WriteResolved16(guest_range_2, 26u, (r4 + 26), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 28u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r3 + 30));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r3 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 28u, (r4 + 28), r6);
        MemoryInline::WriteResolved16(guest_range_2, 30u, (r4 + 30), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.second;
            r6 = resolved_pair.first;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r3 + 34));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r3 + 32));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r6)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 32u, (r4 + 32), r6);
        MemoryInline::WriteResolved16(guest_range_2, 34u, (r4 + 34), r0);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r3 + 36));
    MemoryInline::WriteResolved16(guest_range_2, 36u, (r4 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 38u, (r3 + 38));
    MemoryInline::WriteResolved16(guest_range_2, 38u, (r4 + 38), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 40u, (r3 + 40));
    MemoryInline::WriteResolved16(guest_range_2, 40u, (r4 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 42u, (r3 + 42));
    MemoryInline::WriteResolved16(guest_range_2, 42u, (r4 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 44u, (r3 + 44));
    MemoryInline::WriteResolved16(guest_range_2, 44u, (r4 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 46u, (r3 + 46));
    MemoryInline::WriteResolved16(guest_range_2, 46u, (r4 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 48u, (r3 + 48));
    MemoryInline::WriteResolved16(guest_range_2, 48u, (r4 + 48), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r3);
    r0 = MemoryInline::FlatRead8(r3);
    MemoryInline::WriteResolved16(guest_range_2, 38u, (r4 + 38), static_cast<uint16_t>(r0));
}

loc_800A6168:
{
    r4 = (r4 + 52);
    r5 = (r5 + 1);
}

loc_800A6170:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
}

loc_800A6178:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_800A6060;
    }
}

loc_800A617C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r25 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A618C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A61B4;
    }
}

loc_800A6190:
{
    r5 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r0;
    r4 = (r1 + 24);
    ctx->lr = 0x800A61A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AA4B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = 1;
    ctx->lr = 0x800A61ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800AB0C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r28 + 4));
    // inline leaf 0x800AA730 (8 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 162));
    r5 = 1;
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 157), static_cast<uint8_t>(r5));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 159), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 162), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800AA730
}

loc_800A61B4:
{
    r3 = r25;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800A61BC:
{
    r28 = (r28 + 56);
    r27 = (r27 + 1);
}

loc_800A61C4:
{
    r0 = MemoryInline::FlatRead32((r26 + 2088));
}

loc_800A61CC:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_800A6024;
    }
}

loc_800A61D0:
{
    r3 = MemoryInline::FlatRead32((r26 + 252));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800A61E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A61F4;
    }
}

loc_800A61E4:
{
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x800A61F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A78C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    goto loc_800A620C;
}

loc_800A61F4:
{
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800A61FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A620C;
    }
}

loc_800A6200:
{
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x800A620Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A78C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_800A620C:
{
    r3 = r26;
    ctx->lr = 0x800A6214u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A7D40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 286), static_cast<uint8_t>(r0));
}

loc_800A621C:
{
    ctx->lr = 0x800A6220u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A4530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r3 + 852);
    ctx->lr = 0x800A6228u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r3 = 1;
}

loc_800A622C:
{
    r11 = (r1 + 192);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A5EB0 func_800A5EB0 preserves=true fpr_mask=0x00000000
