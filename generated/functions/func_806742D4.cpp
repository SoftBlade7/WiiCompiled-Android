#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806742D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806742D4;

loc_806742D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -496), 0, 504u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -496), r1);
    r1 = (r1 + -496);
    r0 = ctx->lr;
    r7 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 500u, (r1 + 500), r0);
    r7 = (r7 + 11400);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 472u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 472u, (r1 + 472), r26);
        MemoryInline::WriteResolved32(guest_range_0, 476u, (r1 + 476), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 480u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 480u, (r1 + 480), r28);
        MemoryInline::WriteResolved32(guest_range_0, 484u, (r1 + 484), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 488u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 488u, (r1 + 488), r30);
        MemoryInline::WriteResolved32(guest_range_0, 492u, (r1 + 492), r31);
    }
    r29 = r3;
    r26 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (r1 + 24);
    r4 = 0;
    r5 = 448;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r7);
    ctx->lr = 0x80674310u;
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
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80674320:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80674340;
    }
}

loc_80674324:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r28 = (r3 + 56);
    goto loc_80674344;
}

loc_80674340:
{
    r28 = 0;
}

loc_80674344:
{
    r27 = 0;
}

loc_80674348:
{
    r0 = (r27 & 65535);
    r3 = (r1 + 16);
    r0 = (r0 * 448);
    r4 = (r28 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x80674360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80674364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674398;
    }
}

loc_80674368:
{
    r3 = (r1 + 8);
    r4 = (r1 + 24);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r26;
    r4 = (r1 + 8);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8067438C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80674398;
    }
}

loc_80674390:
{
    r0 = 1;
    goto loc_806743A8;
}

loc_80674398:
{
    r27 = (r27 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(30));
}

loc_806743A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80674348;
    }
}

loc_806743A4:
{
    r0 = 0;
}

loc_806743A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806743AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806743E8;
    }
}

loc_806743B0:
{
    r28 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r1 + 126));
    r3 = MemoryInline::FlatRead32((r28 + 8464));
    ctx->lr = 0x806743C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066375Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806743C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806743E0;
    }
}

loc_806743C8:
{
    r0 = MemoryInline::FlatRead8((r1 + 126));
    r3 = MemoryInline::FlatRead32((r28 + 8464));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r4 = (r3 + 516);
    goto loc_806743EC;
}

loc_806743E0:
{
    r4 = 0;
    goto loc_806743EC;
}

loc_806743E8:
{
    r4 = 0;
}

loc_806743EC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8464));
    r3 = (r3 + 92);
    ctx->lr = 0x806743FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EC498u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 16992), r30);
    r4 = 0x80380000u;
    r27 = r3;
    r28 = (r29 + 16896);
    MemoryInline::FlatWrite8((r29 + 16996), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r29 + 17000), r3);
    r3 = MemoryInline::FlatRead32((r4 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80674420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674458;
    }
}

loc_80674424:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80674428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674460;
    }
}

loc_8067442C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80674430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674468;
    }
}

loc_80674434:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80674438:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674470;
    }
}

loc_8067443C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80674440:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674478;
    }
}

loc_80674444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80674448:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674480;
    }
}

loc_8067444C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80674450:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80674488;
    }
}

loc_80674454:
{
    goto loc_80674490;
}

loc_80674458:
{
    r5 = 1;
    goto loc_80674494;
}

loc_80674460:
{
    r5 = 2;
    goto loc_80674494;
}

loc_80674468:
{
    r5 = 3;
    goto loc_80674494;
}

loc_80674470:
{
    r5 = 4;
    goto loc_80674494;
}

loc_80674478:
{
    r5 = 5;
    goto loc_80674494;
}

loc_80674480:
{
    r5 = 6;
    goto loc_80674494;
}

loc_80674488:
{
    r5 = 7;
    goto loc_80674494;
}

loc_80674490:
{
    r5 = 1;
}

loc_80674494:
{
    r3 = 0x809C0000u;
    r30 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 8464));
    r6 = 1;
    r3 = MemoryInline::FlatRead32((r30 + 8512));
    r4 = (r4 + 92);
    ctx->lr = 0x806744B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806773C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8512));
    r4 = r27;
    r5 = r28;
    ctx->lr = 0x806744C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80677BF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_806744C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806744F0;
    }
}

loc_806744C8:
{
    r5 = 0;
    r4 = 1;
    r0 = 9;
    MemoryInline::FlatWrite32((r29 + 20), r5);
    r3 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r4);
    MemoryInline::FlatWrite32((r29 + 30072), r0);
    MemoryInline::FlatWrite8((r29 + 40), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r29 + 24), r5);
    goto loc_80674504;
}

loc_806744F0:
{
    r3 = r29;
    ctx->lr = 0x806744F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 8512));
    ctx->lr = 0x80674500u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
}

loc_80674504:
{
    r26 = MemoryInline::FlatRead32((r1 + 472));
    r27 = MemoryInline::FlatRead32((r1 + 476));
    r28 = MemoryInline::FlatRead32((r1 + 480));
    r29 = MemoryInline::FlatRead32((r1 + 484));
    r30 = MemoryInline::FlatRead32((r1 + 488));
    r31 = MemoryInline::FlatRead32((r1 + 492));
    r0 = MemoryInline::FlatRead32((r1 + 500));
    ctx->lr = r0;
    r1 = (r1 + 496);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
// RECOMP_REGISTRATION base 0x806742D4 func_806742D4 preserves=true fpr_mask=0x00000000
