#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80842FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80842FB8;

loc_80842FB8:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 244), r29);
    r5 = MemoryInline::FlatRead32((r3 + 2112));
    r0 = MemoryInline::FlatRead32((r3 + 2108));
    r7 = MemoryInline::FlatRead32((r4 + 576));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r6 = MemoryInline::FlatRead32((r3 + 1732));
    r0 = (r0 * 10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(-100));
}

loc_80842FF4:
{
    r6_addr_0 = (r6 + r5);
    r5 = MemoryInline::FlatRead32(r6_addr_0);
    r5 = (r5 + r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80843014;
    }
}

loc_80843000:
{
}

loc_80843004:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8084301C;
    }
}

loc_80843008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1));
}

loc_8084300C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80843344;
    }
}

loc_80843010:
{
    goto loc_80843368;
}

loc_80843014:
{
    ctx->lr = 0x80843018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837B4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80843368;
}

loc_8084301C:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead32((r3 + 3308));
    r0 = (r0 & 255);
    r0 = (r0 * 112);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 112u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 16));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 112u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r1 + 120), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 18));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r1 + 122), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r1 + 124), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r1 + 125), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r1 + 126), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r1 + 127), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 128), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 132), r0);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 32));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 33));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r1 + 137), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r1 + 136), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 34));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 35));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 139), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r1 + 138), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 36));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 37));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r1 + 141), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 140), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 38));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 39));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r1 + 143), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r1 + 142), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 40));
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r1 + 144), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 41));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r1 + 145), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 42));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r1 + 146), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 43));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r1 + 147), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 44));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 148), r0);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 32u, (r3 + 48));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 33u, (r3 + 49));
    MemoryInline::WriteResolved8(guest_range_1, 33u, (r1 + 153), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 32u, (r1 + 152), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r3 + 50));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 35u, (r3 + 51));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r1 + 155), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 34u, (r1 + 154), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r3 + 52));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 37u, (r3 + 53));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r1 + 157), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r1 + 156), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r3 + 54));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 39u, (r3 + 55));
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r1 + 159), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r1 + 158), static_cast<uint8_t>(r4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r3 + 56));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r1 + 160), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 41u, (r3 + 57));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r1 + 161), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 42u, (r3 + 58));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r1 + 162), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 43u, (r3 + 59));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r1 + 163), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 44u, (r3 + 60));
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r1 + 164), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 46u, (r3 + 62));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r1 + 166), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 47u, (r3 + 63));
    MemoryInline::WriteResolved8(guest_range_1, 47u, (r1 + 167), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 64));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 168), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 68));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 172), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 176), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 180), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 80));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 184), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r3 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 188), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 72u, (r3 + 88));
    MemoryInline::WriteResolved16(guest_range_1, 72u, (r1 + 192), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 74u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 74u, (r3 + 90));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 76u, (r3 + 92));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 74u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 76u, (r1 + 196), r0);
        MemoryInline::WriteResolved16(guest_range_1, 74u, (r1 + 194), r4);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 78u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved16(guest_range_0, 78u, (r3 + 94));
            r0 = MemoryInline::ReadResolved16(guest_range_0, 80u, (r3 + 96));
        }
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 78u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_1, 80u, (r1 + 200), r0);
        MemoryInline::WriteResolved16(guest_range_1, 78u, (r1 + 198), r4);
    }
    r4 = MemoryInline::ReadResolved16(guest_range_0, 82u, (r3 + 98));
    r0 = 14;
    MemoryInline::WriteResolved16(guest_range_1, 82u, (r1 + 202), static_cast<uint16_t>(r4));
    r6 = (r1 + 4);
    r4 = (r1 + 116);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 204), r7);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 88u, (r3 + 104));
    MemoryInline::WriteResolved16(guest_range_1, 88u, (r1 + 208), static_cast<uint16_t>(r7));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 90u, (r3 + 106));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 91u, (r3 + 107));
    MemoryInline::WriteResolved8(guest_range_1, 91u, (r1 + 211), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 90u, (r1 + 210), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 92u, (r3 + 108));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 93u, (r3 + 109));
    MemoryInline::WriteResolved8(guest_range_1, 93u, (r1 + 213), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r1 + 212), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 94u, (r3 + 110));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 95u, (r3 + 111));
    MemoryInline::WriteResolved8(guest_range_1, 95u, (r1 + 215), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 94u, (r1 + 214), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 96u, (r3 + 112));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 97u, (r3 + 113));
    MemoryInline::WriteResolved8(guest_range_1, 97u, (r1 + 217), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 96u, (r1 + 216), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 98u, (r3 + 114));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 99u, (r3 + 115));
    MemoryInline::WriteResolved8(guest_range_1, 99u, (r1 + 219), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 98u, (r1 + 218), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 100u, (r3 + 116));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 101u, (r3 + 117));
    MemoryInline::WriteResolved8(guest_range_1, 101u, (r1 + 221), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 100u, (r1 + 220), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 102u, (r3 + 118));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 103u, (r3 + 119));
    MemoryInline::WriteResolved8(guest_range_1, 103u, (r1 + 223), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 102u, (r1 + 222), static_cast<uint8_t>(r8));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 104u, (r3 + 120));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 105u, (r3 + 121));
    MemoryInline::WriteResolved8(guest_range_1, 105u, (r1 + 225), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 104u, (r1 + 224), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 106u, (r3 + 122));
    MemoryInline::WriteResolved8(guest_range_1, 106u, (r1 + 226), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 107u, (r3 + 123));
    MemoryInline::WriteResolved8(guest_range_1, 107u, (r1 + 227), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 108u, (r3 + 124));
    MemoryInline::WriteResolved8(guest_range_1, 108u, (r1 + 228), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 109u, (r3 + 125));
    MemoryInline::WriteResolved8(guest_range_1, 109u, (r1 + 229), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 110u, (r3 + 126));
    MemoryInline::WriteResolved8(guest_range_1, 110u, (r1 + 230), static_cast<uint8_t>(r7));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 111u, (r3 + 127));
    MemoryInline::WriteResolved8(guest_range_1, 111u, (r1 + 231), static_cast<uint8_t>(r3));
    ctr = r0;
}

loc_80843284:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80843284;
    }
}

loc_80843298:
{
    r7 = 0x809C0000u;
    r6 = MemoryInline::FlatRead8((r1 + 15));
    r3 = MemoryInline::FlatRead32((r7 + -10456));
    r0 = 14;
    r4 = (r1 + 116);
    MemoryInline::FlatWrite32((r3 + 5980), r6);
    r3 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = MemoryInline::FlatRead8((r1 + 12));
    MemoryInline::FlatWrite32((r3 + 5976), r6);
    r3 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite32((r3 + 3108), r6);
    r3 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite32((r3 + 3104), r6);
    r3 = MemoryInline::FlatRead32((r7 + -10456));
    r6 = (r3 + 6024);
    ctr = r0;
}

loc_808432E0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + 8);
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r6 + 4), r3);
    MemoryInline::FlatWrite32((r6 + 8), r0);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808432E0;
    }
}

loc_808432F4:
{
    r29 = MemoryInline::FlatRead16((r5 + 8));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r0 = (r29 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80843300:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80843310;
    }
}

loc_80843304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80843308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80843330;
    }
}

loc_8084330C:
{
    goto loc_80843368;
}

loc_80843310:
{
    r3 = 125;
    ctx->lr = 0x80843318u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80843CF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32((r3 + 2352), r29);
    r3 = r30;
    r5 = r31;
    r4 = 125;
    ctx->lr = 0x8084332Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80843368;
}

loc_80843330:
{
    r3 = r30;
    r5 = r31;
    r4 = 109;
    ctx->lr = 0x80843340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80843368;
}

loc_80843344:
{
    r29 = MemoryInline::FlatRead16((r5 + 6));
    r29 = (r29 << 16);
    r29 = (static_cast<int32_t>(r29) >> 16);
    r3 = 126;
    ctx->lr = 0x80843350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80851D4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r3 + 1732), r29);
    f1.d = MemoryInline::FlatReadFloat32((r4 + -10924));
    r3 = r30;
    r4 = 126;
    ctx->lr = 0x80843368u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083761Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80843368:
{
    r0 = MemoryInline::FlatRead32((r1 + 260));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80842FB8 func_80842FB8 preserves=true fpr_mask=0x00000000
