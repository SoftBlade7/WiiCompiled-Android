#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806532D8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806532D8;

loc_806532D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_80653308:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_80653318;
    }
}

loc_8065330C:
{
}

loc_80653310:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80653318;
    }
}

loc_80653314:
{
    r3 = 1;
}

loc_80653318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065331C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065370C;
    }
}

loc_80653320:
{
    r29 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    ctx->lr = 0x8065332Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80656F40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r30);
    r3 = (r31 + 20);
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r30);
    r5 = 128;
    MemoryInline::FlatWrite32((r31 + 12), r30);
    ctx->lr = 0x8065334Cu;
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
    r3 = (r31 + 148);
    r4 = 0;
    r5 = 248;
    ctx->lr = 0x8065335Cu;
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
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 456u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 400u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 404u, (r31 + 404), r30);
        MemoryInline::WriteResolved32(guest_range_0, 400u, (r31 + 400), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 408u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 408u, (r31 + 408), r30);
        MemoryInline::WriteResolved32(guest_range_0, 412u, (r31 + 412), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 416u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 416u, (r31 + 416), r30);
        MemoryInline::WriteResolved32(guest_range_0, 420u, (r31 + 420), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 424u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 424u, (r31 + 424), r30);
        MemoryInline::WriteResolved32(guest_range_0, 428u, (r31 + 428), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 432u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 432u, (r31 + 432), r30);
        MemoryInline::WriteResolved32(guest_range_0, 436u, (r31 + 436), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 440u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 440u, (r31 + 440), r30);
        MemoryInline::WriteResolved32(guest_range_0, 444u, (r31 + 444), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 448u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 448u, (r31 + 448), r30);
        MemoryInline::WriteResolved32(guest_range_0, 452u, (r31 + 452), r30);
    }
    r3 = MemoryInline::FlatRead32((r29 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 232));
}

loc_806533A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_806533C0;
    }
}

loc_806533A4:
{
}

loc_806533A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80653480;
    }
}

loc_806533AC:
{
}

loc_806533B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80653540;
    }
}

loc_806533B4:
{
}

loc_806533B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80653540;
    }
}

loc_806533BC:
{
    goto loc_8065360C;
}

loc_806533C0:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_806533D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_806533E0;
    }
}

loc_806533D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_806533D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653430;
    }
}

loc_806533DC:
{
    goto loc_80653704;
}

loc_806533E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = 11;
    r5 = (r0 * 88);
    r0 = 5;
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r6 + 720));
    r7 = MemoryInline::FlatRead32((r5 + 68));
    r5 = (r6 & 255);
    MemoryInline::FlatWrite8((r3 + 9705), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
}

loc_80653414:
{
    MemoryInline::FlatWrite8((r3 + 9706), static_cast<uint8_t>(r7));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80653420;
    }
}

loc_8065341C:
{
    r0 = r5;
}

loc_80653420:
{
    MemoryInline::FlatWrite8((r3 + 9707), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 9704), static_cast<uint8_t>(r0));
    goto loc_80653704;
}

loc_80653430:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = 12;
    r5 = (r0 * 88);
    r0 = 5;
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r6 + 720));
    r7 = MemoryInline::FlatRead32((r5 + 68));
    r5 = (r6 & 255);
    MemoryInline::FlatWrite8((r3 + 9705), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
}

loc_80653464:
{
    MemoryInline::FlatWrite8((r3 + 9706), static_cast<uint8_t>(r7));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80653470;
    }
}

loc_8065346C:
{
    r0 = r5;
}

loc_80653470:
{
    MemoryInline::FlatWrite8((r3 + 9707), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 9704), static_cast<uint8_t>(r0));
    goto loc_80653704;
}

loc_80653480:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_80653490:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_806534A0;
    }
}

loc_80653494:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_80653498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806534F0;
    }
}

loc_8065349C:
{
    goto loc_80653704;
}

loc_806534A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = 13;
    r5 = (r0 * 88);
    r0 = 5;
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r6 + 720));
    r7 = MemoryInline::FlatRead32((r5 + 68));
    r5 = (r6 & 255);
    MemoryInline::FlatWrite8((r3 + 9705), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
}

loc_806534D4:
{
    MemoryInline::FlatWrite8((r3 + 9706), static_cast<uint8_t>(r7));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806534E0;
    }
}

loc_806534DC:
{
    r0 = r5;
}

loc_806534E0:
{
    MemoryInline::FlatWrite8((r3 + 9707), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 9704), static_cast<uint8_t>(r0));
    goto loc_80653704;
}

loc_806534F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r4 + 7736));
    r4 = 14;
    r5 = (r0 * 88);
    r0 = 5;
    r6 = MemoryInline::FlatRead32((r6 + 152));
    r5 = (r3 + r5);
    r6 = MemoryInline::FlatRead32((r6 + 720));
    r7 = MemoryInline::FlatRead32((r5 + 68));
    r5 = (r6 & 255);
    MemoryInline::FlatWrite8((r3 + 9705), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
}

loc_80653524:
{
    MemoryInline::FlatWrite8((r3 + 9706), static_cast<uint8_t>(r7));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80653530;
    }
}

loc_8065352C:
{
    r0 = r5;
}

loc_80653530:
{
    MemoryInline::FlatWrite8((r3 + 9707), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 9704), static_cast<uint8_t>(r0));
    goto loc_80653704;
}

loc_80653540:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_80653550:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80653560;
    }
}

loc_80653554:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_80653558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806535B4;
    }
}

loc_8065355C:
{
    goto loc_80653704;
}

loc_80653560:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = 5;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r5 + 10524));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r3 = (r3 * 88);
    r4 = MemoryInline::FlatRead32((r4 + 720));
    r3 = (r5 + r3);
    r4 = (r4 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
}

loc_80653594:
{
    MemoryInline::FlatWrite8((r5 + 9705), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r5 + 9706), static_cast<uint8_t>(r3));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806535A4;
    }
}

loc_806535A0:
{
    r0 = r4;
}

loc_806535A4:
{
    MemoryInline::FlatWrite8((r5 + 9707), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r5 + 9704), static_cast<uint8_t>(r0));
    goto loc_80653704;
}

loc_806535B4:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r3 + 8408));
    r3 = 8;
    r5 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = 5;
    r4 = MemoryInline::FlatRead32((r6 + 10524));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r4 = (r4 * 88);
    r5 = MemoryInline::FlatRead32((r5 + 720));
    r4 = (r6 + r4);
    r5 = (r5 & 255);
    r4 = MemoryInline::FlatRead32((r4 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
}

loc_806535EC:
{
    MemoryInline::FlatWrite8((r6 + 9705), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r6 + 9706), static_cast<uint8_t>(r4));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806535FC;
    }
}

loc_806535F8:
{
    r0 = r5;
}

loc_806535FC:
{
    MemoryInline::FlatWrite8((r6 + 9707), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite8((r6 + 9704), static_cast<uint8_t>(r0));
    goto loc_80653704;
}

loc_8065360C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8065361C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_8065362C;
    }
}

loc_80653620:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(9));
}

loc_80653624:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80653698;
    }
}

loc_80653628:
{
    goto loc_80653704;
}

loc_8065362C:
{
}

loc_80653630:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8065363C;
    }
}

loc_80653634:
{
    r5 = -1;
    goto loc_80653648;
}

loc_8065363C:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r5 = MemoryInline::FlatRead32((r3 + 132));
}

loc_80653648:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r3 + 8408));
    r0 = 5;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r6 + 10524));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r3 = (r3 * 88);
    r4 = MemoryInline::FlatRead32((r4 + 720));
    r3 = (r6 + r3);
    r4 = (r4 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
}

loc_8065367C:
{
    MemoryInline::FlatWrite8((r6 + 9705), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r6 + 9706), static_cast<uint8_t>(r3));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8065368C;
    }
}

loc_80653688:
{
    r0 = r4;
}

loc_8065368C:
{
    MemoryInline::FlatWrite8((r6 + 9707), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r6 + 9704), static_cast<uint8_t>(r5));
    goto loc_80653704;
}

loc_80653698:
{
}

loc_8065369C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_806536A8;
    }
}

loc_806536A0:
{
    r6 = -1;
    goto loc_806536B4;
}

loc_806536A8:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r6 = MemoryInline::FlatRead32((r3 + 132));
}

loc_806536B4:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + 8408));
    r3 = 8;
    r5 = MemoryInline::FlatRead32((r4 + 7736));
    r0 = 5;
    r4 = MemoryInline::FlatRead32((r7 + 10524));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r4 = (r4 * 88);
    r5 = MemoryInline::FlatRead32((r5 + 720));
    r4 = (r7 + r4);
    r5 = (r5 & 255);
    r4 = MemoryInline::FlatRead32((r4 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(5));
}

loc_806536EC:
{
    MemoryInline::FlatWrite8((r7 + 9705), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r7 + 9706), static_cast<uint8_t>(r4));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806536FC;
    }
}

loc_806536F8:
{
    r0 = r5;
}

loc_806536FC:
{
    MemoryInline::FlatWrite8((r7 + 9707), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 9704), static_cast<uint8_t>(r6));
}

loc_80653704:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, r31, static_cast<uint8_t>(r0));
}

loc_8065370C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF0000FB gpr_write=0xFF0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806532D8 func_806532D8 preserves=true fpr_mask=0x00000000
