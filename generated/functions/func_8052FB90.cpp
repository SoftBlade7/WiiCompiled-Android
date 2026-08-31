#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052FB90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8052FB90;

loc_8052FB90:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r31);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r30);
    }
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r28);
    MemoryInline::WriteResolved8(guest_range_3, 10u, (r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052FBCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052FBD4;
    }
}

loc_8052FBD0:
{
    ctx->lr = 0x8052FBD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052FA0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8052FBD4:
{
    r3 = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052F1E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r5 = 0;
    r0 = -1;
    r8 = (r5 * 240);
    r3 = r29;
    r5 = 6;
    r4 = (r1 + 10);
    r7 = (r29 + r8);
    r6 = (r1 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 13), 0, 1202u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r7 + 13), static_cast<uint8_t>(r0));
    r8 = (r5 * 240);
    r5 = (r1 + 9);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r7 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 240u, (r7 + 253), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 241u, (r7 + 254), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 480u, (r7 + 493), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 481u, (r7 + 494), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 720u, (r7 + 733), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 721u, (r7 + 734), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 960u, (r7 + 973), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 961u, (r7 + 974), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1200u, (r7 + 1213), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1201u, (r7 + 1214), static_cast<uint8_t>(r0));
    r7 = (r29 + r8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 13), 0, 1202u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r7 + 13), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r7 + 14), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 240u, (r7 + 253), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 241u, (r7 + 254), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 480u, (r7 + 493), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 481u, (r7 + 494), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 720u, (r7 + 733), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 721u, (r7 + 734), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 960u, (r7 + 973), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 961u, (r7 + 974), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1200u, (r7 + 1213), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1201u, (r7 + 1214), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 2916), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 2917), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 2918), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 2919), static_cast<uint8_t>(r0));
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052F788u>(ctx);
    r0 = ctx->gpr[0];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r29 + 2900));
    r31 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8052FC88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_8052FC94;
    }
}

loc_8052FC8C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
}

loc_8052FC94:
{
    r0 = MemoryInline::FlatRead8((r29 + 2924));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052FC9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052FDFC;
    }
}

loc_8052FCA0:
{
    r4 = MemoryInline::FlatRead32((r29 + 2896));
    r0 = 0;
    r3 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8052FCB0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(7))) {
        goto loc_8052FCC0;
    }
}

loc_8052FCB4:
{
}

loc_8052FCB8:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(10))) {
        goto loc_8052FCC0;
    }
}

loc_8052FCBC:
{
    r0 = 1;
}

loc_8052FCC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8052FCC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8052FDFC;
    }
}

loc_8052FCC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8052FCCC:
{
    r4 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8052FDFC;
    }
}

loc_8052FCD4:
{
}

loc_8052FCD8:
{
    r0 = (r3 + 248);
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(8))) {
        goto loc_8052FDC8;
    }
}

loc_8052FCE0:
{
    r5 = (r0 & 255);
    r11 = 0;
    r0 = (r5 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8052FCF8:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8052FDC8;
    }
}

loc_8052FCFC:
{
    r7 = (r4 & 255);
    r5 = (r4 + 1);
    r6 = (r7 * 240);
    r0 = (r4 + 2);
    r10 = (r5 & 255);
    r9 = (r0 & 255);
    r12 = (r29 + r6);
    r0 = (r4 + 3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r12 + 224), 0, 1690u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, (r12 + 224), static_cast<uint16_t>(r11));
    r8 = (r0 & 255);
    r28 = (r3 - r7);
    r0 = (r4 + 4);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r12 + 233), static_cast<uint8_t>(r28));
    r7 = (r0 & 255);
    r6 = (r4 + 5);
    r5 = (r4 + 6);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r12 + 232), static_cast<uint8_t>(r28));
    r0 = (r4 + 7);
    r6 = (r6 & 255);
    r5 = (r5 & 255);
    MemoryInline::WriteResolved16(guest_range_2, 240u, (r12 + 464), static_cast<uint16_t>(r11));
    r10 = (r3 - r10);
    r0 = (r0 & 255);
    r9 = (r3 - r9);
    MemoryInline::WriteResolved8(guest_range_2, 249u, (r12 + 473), static_cast<uint8_t>(r10));
    r8 = (r3 - r8);
    r7 = (r3 - r7);
    r6 = (r3 - r6);
    MemoryInline::WriteResolved8(guest_range_2, 248u, (r12 + 472), static_cast<uint8_t>(r10));
    r5 = (r3 - r5);
    r0 = (r3 - r0);
    r4 = (r4 + 8);
    MemoryInline::WriteResolved16(guest_range_2, 480u, (r12 + 704), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 489u, (r12 + 713), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 488u, (r12 + 712), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved16(guest_range_2, 720u, (r12 + 944), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 729u, (r12 + 953), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 728u, (r12 + 952), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved16(guest_range_2, 960u, (r12 + 1184), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 969u, (r12 + 1193), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 968u, (r12 + 1192), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_2, 1200u, (r12 + 1424), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 1209u, (r12 + 1433), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 1208u, (r12 + 1432), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_2, 1440u, (r12 + 1664), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 1449u, (r12 + 1673), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 1448u, (r12 + 1672), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_2, 1680u, (r12 + 1904), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 1689u, (r12 + 1913), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 1688u, (r12 + 1912), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052FCFC;
    }
}

loc_8052FDC8:
{
    r5 = 0;
    goto loc_8052FDF0;
}

loc_8052FDD0:
{
    r6 = (r4 & 255);
    r4 = (r4 + 1);
    r0 = (r6 * 240);
    r7 = (r3 - r6);
    r6 = (r29 + r0);
    MemoryInline::FlatWrite16((r6 + 224), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r6 + 233), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r6 + 232), static_cast<uint8_t>(r7));
}

loc_8052FDF0:
{
    r0 = (r4 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8052FDF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8052FDD0;
    }
}

loc_8052FDFC:
{
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r3 = r29;
    ctx->lr = 0x8052FE08u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052F4E8u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x8052FE14u;
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8052ED28u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    ctx->lr = 0x8052FE1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052F924u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r1 + 10));
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r1 + 9));
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 7), static_cast<uint8_t>(r31));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r1 + 8));
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r1 + 28));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r1 + 20));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r1 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r1 + 36));
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8052FB90 func_8052FB90 preserves=true fpr_mask=0x00000000
