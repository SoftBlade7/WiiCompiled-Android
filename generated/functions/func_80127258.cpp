#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80127258(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80127258;

loc_80127258:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = (r3 + 40);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r13 + -26208));
    r4 = MemoryInline::FlatRead32((r13 + -26224));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r13 + -26208), r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r29 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r0 * 320);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8012729C:
{
    r31 = (r4 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801272C8;
    }
}

loc_801272A4:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 106));
    MemoryInline::FlatWrite16((r30 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 122));
    MemoryInline::FlatWrite16((r30 + 122), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 124));
    MemoryInline::FlatWrite16((r30 + 124), static_cast<uint16_t>(r0));
    goto loc_80127788;
}

loc_801272C8:
{
    r0 = (r29 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801272CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801272E4;
    }
}

loc_801272D0:
{
    r3 = r31;
    r4 = r30;
    r5 = 320;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80127788;
}

loc_801272E4:
{
    r0 = (r29 & 1);
}

loc_801272E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801272FC;
    }
}

loc_801272EC:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 10));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_801272FC:
{
    r0 = (r29 & 2);
}

loc_80127300:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012730C;
    }
}

loc_80127304:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    MemoryInline::FlatWrite32((r31 + 12), r0);
}

loc_8012730C:
{
    r0 = (r29 & 4);
}

loc_80127310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127320;
    }
}

loc_80127314:
{
    r0 = MemoryInline::FlatRead16((r30 + 16));
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
    goto loc_80127328;
}

loc_80127320:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
    MemoryInline::FlatWrite16((r30 + 16), static_cast<uint16_t>(r0));
}

loc_80127328:
{
    r0 = (r29 & 8);
}

loc_8012732C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127338;
    }
}

loc_80127330:
{
    r0 = MemoryInline::FlatRead16((r30 + 18));
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
}

loc_80127338:
{
    r0 = (r29 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012733C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80127350;
    }
}

loc_80127340:
{
    r3 = (r31 + 20);
    r4 = (r30 + 20);
    r5 = 48;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80127350:
{
    r0 = (r29 & 64);
}

loc_80127354:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012736C;
    }
}

loc_80127358:
{
    r0 = MemoryInline::FlatRead16((r30 + 78));
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 80));
    MemoryInline::FlatWrite16((r31 + 80), static_cast<uint16_t>(r0));
    goto loc_801273F4;
}

loc_8012736C:
{
    r0 = (r29 & 32);
}

loc_80127370:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801273F4;
    }
}

loc_80127374:
{
    r3 = MemoryInline::FlatRead16((r30 + 68));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 68), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 70));
    MemoryInline::FlatWrite16((r31 + 70), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 72));
    MemoryInline::FlatWrite16((r31 + 72), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 74));
    MemoryInline::FlatWrite16((r31 + 74), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 76));
    MemoryInline::FlatWrite16((r31 + 76), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 78));
    MemoryInline::FlatWrite16((r31 + 78), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r30 + 80));
    MemoryInline::FlatWrite16((r31 + 80), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r28 + 36));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r0);
    }
}

loc_801273F4:
{
    r0 = (r29 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801273F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012740C;
    }
}

loc_801273FC:
{
    r3 = (r31 + 82);
    r4 = (r30 + 82);
    r5 = 24;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8012740C:
{
    r0 = (r29 & 512);
}

loc_80127410:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127428;
    }
}

loc_80127414:
{
    r3 = MemoryInline::FlatRead16((r31 + 106));
    r0 = MemoryInline::FlatRead16((r30 + 108));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 106), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r0));
    goto loc_80127440;
}

loc_80127428:
{
    r0 = (r29 & 256);
}

loc_8012742C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127440;
    }
}

loc_80127430:
{
    r0 = MemoryInline::FlatRead16((r30 + 106));
    MemoryInline::FlatWrite16((r31 + 106), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 108));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 108), static_cast<uint16_t>(r0));
}

loc_80127440:
{
    r0 = (r29 & 30720);
}

loc_80127444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127498;
    }
}

loc_80127448:
{
    r0 = (r29 & 2048);
}

loc_8012744C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127458;
    }
}

loc_80127450:
{
    r0 = MemoryInline::FlatRead16((r30 + 110));
    MemoryInline::FlatWrite16((r31 + 110), static_cast<uint16_t>(r0));
}

loc_80127458:
{
    r0 = (r29 & 4096);
}

loc_8012745C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127468;
    }
}

loc_80127460:
{
    r0 = MemoryInline::FlatRead32((r30 + 114));
    MemoryInline::FlatWrite32((r31 + 114), r0);
}

loc_80127468:
{
    r0 = (r29 & 8192);
}

loc_8012746C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127478;
    }
}

loc_80127470:
{
    r0 = MemoryInline::FlatRead32((r30 + 118));
    MemoryInline::FlatWrite32((r31 + 118), r0);
}

loc_80127478:
{
    r0 = (r29 & 16384);
}

loc_8012747C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012748C;
    }
}

loc_80127480:
{
    r0 = MemoryInline::FlatRead32((r30 + 122));
    MemoryInline::FlatWrite32((r31 + 122), r0);
    goto loc_801274D4;
}

loc_8012748C:
{
    r0 = MemoryInline::FlatRead32((r31 + 122));
    MemoryInline::FlatWrite32((r30 + 122), r0);
    goto loc_801274D4;
}

loc_80127498:
{
    r0 = (r29 & 1024);
}

loc_8012749C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801274C4;
    }
}

loc_801274A0:
{
    r0 = MemoryInline::FlatRead32((r30 + 110));
    MemoryInline::FlatWrite32((r31 + 110), r0);
    r0 = MemoryInline::FlatRead32((r30 + 114));
    MemoryInline::FlatWrite32((r31 + 114), r0);
    r0 = MemoryInline::FlatRead32((r30 + 118));
    MemoryInline::FlatWrite32((r31 + 118), r0);
    r0 = MemoryInline::FlatRead32((r30 + 122));
    MemoryInline::FlatWrite32((r31 + 122), r0);
    goto loc_801274D4;
}

loc_801274C4:
{
    r0 = MemoryInline::FlatRead16((r31 + 122));
    MemoryInline::FlatWrite16((r30 + 122), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 124));
    MemoryInline::FlatWrite16((r30 + 124), static_cast<uint16_t>(r0));
}

loc_801274D4:
{
    r0 = (r29 & 32768);
}

loc_801274D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012752C;
    }
}

loc_801274DC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 126), 0, 40u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 126));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 126), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r31 + 126), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r30 + 130));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r31 + 130), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r30 + 134));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r31 + 134), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r30 + 138));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r31 + 138), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r30 + 142));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r31 + 142), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r30 + 146));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r31 + 146), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r30 + 150));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r31 + 150), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r30 + 154));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r31 + 154), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r30 + 158));
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r31 + 158), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r30 + 162));
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r31 + 162), r0);
}

loc_8012752C:
{
    r0 = (r29 & 131072);
}

loc_80127530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127548;
    }
}

loc_80127534:
{
    r0 = MemoryInline::FlatRead16((r30 + 166));
    MemoryInline::FlatWrite16((r31 + 166), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 168));
    MemoryInline::FlatWrite16((r31 + 168), static_cast<uint16_t>(r0));
    goto loc_80127588;
}

loc_80127548:
{
    r0 = (r29 & 65536);
}

loc_8012754C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127588;
    }
}

loc_80127550:
{
    r0 = MemoryInline::FlatRead16((r30 + 166));
    MemoryInline::FlatWrite16((r31 + 166), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 168));
    MemoryInline::FlatWrite16((r31 + 168), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 170));
    MemoryInline::FlatWrite16((r31 + 170), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 172));
    MemoryInline::FlatWrite16((r31 + 172), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 174));
    MemoryInline::FlatWrite16((r31 + 174), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 176));
    MemoryInline::FlatWrite16((r31 + 176), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 178));
    MemoryInline::FlatWrite16((r31 + 178), static_cast<uint16_t>(r0));
}

loc_80127588:
{
    r0 = (r29 & 262144);
}

loc_8012758C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801275A8;
    }
}

loc_80127590:
{
    r0 = MemoryInline::FlatRead16((r30 + 180));
    MemoryInline::FlatWrite16((r31 + 180), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 182));
    MemoryInline::FlatWrite16((r31 + 182), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 184));
    MemoryInline::FlatWrite16((r31 + 184), static_cast<uint16_t>(r0));
}

loc_801275A8:
{
    r0 = (r29 & 1048576);
}

loc_801275AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801275C4;
    }
}

loc_801275B0:
{
    r0 = MemoryInline::FlatRead16((r30 + 190));
    MemoryInline::FlatWrite16((r31 + 190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 192));
    MemoryInline::FlatWrite16((r31 + 192), static_cast<uint16_t>(r0));
    goto loc_801275EC;
}

loc_801275C4:
{
    r0 = (r29 & 524288);
}

loc_801275C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801275EC;
    }
}

loc_801275CC:
{
    r0 = MemoryInline::FlatRead16((r30 + 186));
    MemoryInline::FlatWrite16((r31 + 186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 188));
    MemoryInline::FlatWrite16((r31 + 188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 190));
    MemoryInline::FlatWrite16((r31 + 190), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 192));
    MemoryInline::FlatWrite16((r31 + 192), static_cast<uint16_t>(r0));
}

loc_801275EC:
{
    r0 = (r29 & 4194304);
}

loc_801275F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127620;
    }
}

loc_801275F4:
{
    r0 = MemoryInline::FlatRead16((r30 + 204));
    MemoryInline::FlatWrite16((r31 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 206));
    MemoryInline::FlatWrite16((r31 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 208));
    MemoryInline::FlatWrite16((r31 + 208), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 210));
    MemoryInline::FlatWrite16((r31 + 210), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 212));
    MemoryInline::FlatWrite16((r31 + 212), static_cast<uint16_t>(r0));
    goto loc_80127678;
}

loc_80127620:
{
    r0 = (r29 & 2097152);
}

loc_80127624:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127678;
    }
}

loc_80127628:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 194), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r30 + 194));
    guest_range_4 = MemoryInline::ResolveRangeHost((r31 + 194), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, (r31 + 194), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r30 + 196));
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r31 + 196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r30 + 198));
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r31 + 198), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r30 + 200));
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r31 + 200), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r30 + 202));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r31 + 202), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r30 + 204));
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r31 + 204), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r30 + 206));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r31 + 206), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r30 + 208));
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r31 + 208), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 16u, (r30 + 210));
    MemoryInline::WriteResolved16(guest_range_4, 16u, (r31 + 210), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 18u, (r30 + 212));
    MemoryInline::WriteResolved16(guest_range_4, 18u, (r31 + 212), static_cast<uint16_t>(r0));
}

loc_80127678:
{
    r0 = (r29 & 8388608);
}

loc_8012767C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127688;
    }
}

loc_80127680:
{
    r0 = MemoryInline::FlatRead16((r30 + 214));
    MemoryInline::FlatWrite16((r31 + 214), static_cast<uint16_t>(r0));
}

loc_80127688:
{
    r0 = (r29 & 16777216);
}

loc_8012768C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127698;
    }
}

loc_80127690:
{
    r0 = MemoryInline::FlatRead16((r30 + 216));
    MemoryInline::FlatWrite16((r31 + 216), static_cast<uint16_t>(r0));
}

loc_80127698:
{
    r0 = (r29 & 33554432);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012769C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801276B0;
    }
}

loc_801276A0:
{
    r3 = (r31 + 218);
    r4 = (r30 + 218);
    r5 = 32;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801276B0:
{
    r0 = (r29 & 67108864);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801276B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801276C8;
    }
}

loc_801276B8:
{
    r3 = (r31 + 250);
    r4 = (r30 + 250);
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801276C8:
{
    r0 = (r29 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801276CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801276E0;
    }
}

loc_801276D0:
{
    r3 = (r31 + 266);
    r4 = (r30 + 266);
    r5 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801276E0:
{
    r0 = (r29 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801276E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801276FC;
    }
}

loc_801276E8:
{
    r0 = MemoryInline::FlatRead16((r30 + 280));
    MemoryInline::FlatWrite16((r31 + 280), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 282));
    MemoryInline::FlatWrite16((r31 + 282), static_cast<uint16_t>(r0));
    goto loc_80127788;
}

loc_801276FC:
{
    r0 = (r29 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80127700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80127730;
    }
}

loc_80127704:
{
    r0 = MemoryInline::FlatRead16((r30 + 286));
    MemoryInline::FlatWrite16((r31 + 286), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 288));
    MemoryInline::FlatWrite16((r31 + 288), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 290));
    MemoryInline::FlatWrite16((r31 + 290), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 292));
    MemoryInline::FlatWrite16((r31 + 292), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 294));
    MemoryInline::FlatWrite16((r31 + 294), static_cast<uint16_t>(r0));
    goto loc_80127788;
}

loc_80127730:
{
    r0 = (r29 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80127734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80127788;
    }
}

loc_80127738:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r30 + 276), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_5, 0u, (r30 + 276));
    guest_range_6 = MemoryInline::ResolveRangeHost((r31 + 276), 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_6, 0u, (r31 + 276), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 2u, (r30 + 278));
    MemoryInline::WriteResolved16(guest_range_6, 2u, (r31 + 278), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 4u, (r30 + 280));
    MemoryInline::WriteResolved16(guest_range_6, 4u, (r31 + 280), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 6u, (r30 + 282));
    MemoryInline::WriteResolved16(guest_range_6, 6u, (r31 + 282), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 8u, (r30 + 284));
    MemoryInline::WriteResolved16(guest_range_6, 8u, (r31 + 284), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 10u, (r30 + 286));
    MemoryInline::WriteResolved16(guest_range_6, 10u, (r31 + 286), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 12u, (r30 + 288));
    MemoryInline::WriteResolved16(guest_range_6, 12u, (r31 + 288), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 14u, (r30 + 290));
    MemoryInline::WriteResolved16(guest_range_6, 14u, (r31 + 290), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 16u, (r30 + 292));
    MemoryInline::WriteResolved16(guest_range_6, 16u, (r31 + 292), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_5, 18u, (r30 + 294));
    MemoryInline::WriteResolved16(guest_range_6, 18u, (r31 + 294), static_cast<uint16_t>(r0));
}

loc_80127788:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000207B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80127258 func_80127258 preserves=true fpr_mask=0x00000000
