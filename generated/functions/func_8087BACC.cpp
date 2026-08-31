#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8087BACC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8087BACC;

loc_8087BACC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r5 = MemoryInline::FlatRead32((r5 + -10456));
    r0 = MemoryInline::FlatRead32((r5 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8087BAF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087BB00;
    }
}

loc_8087BAF8:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BB00:
{
    r7 = MemoryInline::FlatRead32(r4);
    r6 = 0x802A0000u;
    r6 = (r6 + 16640);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r6 = MemoryInline::FlatRead16((r7 + 42));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat32((r7 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8087BB28:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 8));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    r4 = MemoryInline::FlatRead16((r7 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    r5 = MemoryInline::FlatRead16((r7 + 46));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087BBA4;
    }
}

loc_8087BB4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 17272));
}

loc_8087BB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8087BB70;
    }
}

loc_8087BB58:
{
}

loc_8087BB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8087BB70;
    }
}

loc_8087BB60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_8087BB64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087BB70;
    }
}

loc_8087BB68:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BB70:
{
}

loc_8087BB74:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8087BB8C;
    }
}

loc_8087BB78:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8087BB80:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_8087BB8C;
    }
}

loc_8087BB84:
{
    r4 = 0;
    goto loc_8087BC14;
}

loc_8087BB8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_8087BB90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087BB9C;
    }
}

loc_8087BB94:
{
    r4 = 255;
    goto loc_8087BC14;
}

loc_8087BB9C:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BBA4:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8087BBA8:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8087BC0C;
    }
}

loc_8087BBAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 17272));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8087BBB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087BBC0;
    }
}

loc_8087BBB8:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BBC0:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8087BBD4;
    }
}

loc_8087BBC4:
{
}

loc_8087BBC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8087BBD4;
    }
}

loc_8087BBCC:
{
    r4 = 0;
    goto loc_8087BC14;
}

loc_8087BBD4:
{
}

loc_8087BBD8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(1))) {
        goto loc_8087BBEC;
    }
}

loc_8087BBDC:
{
}

loc_8087BBE0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8087BBEC;
    }
}

loc_8087BBE4:
{
    r4 = 1;
    goto loc_8087BC14;
}

loc_8087BBEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8087BBF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087BC04;
    }
}

loc_8087BBF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8087BBF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087BC04;
    }
}

loc_8087BBFC:
{
    r4 = 2;
    goto loc_8087BC14;
}

loc_8087BC04:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BC0C:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BC14:
{
}

loc_8087BC18:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8087BC24;
    }
}

loc_8087BC1C:
{
    r8 = 0;
    goto loc_8087BC5C;
}

loc_8087BC24:
{
}

loc_8087BC28:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_8087BC34;
    }
}

loc_8087BC2C:
{
    r8 = 1;
    goto loc_8087BC5C;
}

loc_8087BC34:
{
}

loc_8087BC38:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_8087BC44;
    }
}

loc_8087BC3C:
{
    r8 = 2;
    goto loc_8087BC5C;
}

loc_8087BC44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_8087BC48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087BC54;
    }
}

loc_8087BC4C:
{
    r8 = 3;
    goto loc_8087BC5C;
}

loc_8087BC54:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BC5C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2812));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_8087BC64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087BC70;
    }
}

loc_8087BC68:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BC70:
{
    r7 = (r0 * 20);
    r5 = (r4 + -255);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r6 = 1;
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    r7 = (r3 + r7);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r7 + 2816), f2.d);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r5 = (r5_rot_1 & 134217727);
    MemoryInline::FlatWriteFloat32((r7 + 2820), f1.d);
    MemoryInline::FlatWriteFloat32((r7 + 2824), f0.d);
    MemoryInline::FlatWrite32((r7 + 2828), r8);
    MemoryInline::FlatWrite8((r7 + 2832), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r7 + 2833), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r3 + 2812));
    r6 = MemoryInline::FlatRead8(r3);
    r7 = MemoryInline::FlatRead8((r3 + 1));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 2812), static_cast<uint8_t>(r5));
}

loc_8087BCC4:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(r6))) {
        goto loc_8087BD54;
    }
}

loc_8087BCC8:
{
    r6 = 0;
    goto loc_8087BD30;
}

loc_8087BCD0:
{
    r5 = (r6 & 255);
    r5 = (r5 * 28);
    r9 = (r3 + r5);
    r5 = MemoryInline::FlatRead8((r9 + 16));
}

loc_8087BCE4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(255))) {
        goto loc_8087BD2C;
    }
}

loc_8087BCE8:
{
    r6 = MemoryInline::FlatRead8((r9 + 25));
    r5 = (r7 + -1);
    r5 = (r5 & 255);
    r7 = 0;
    r6 = (r6 * 20);
    r8 = (r5 * 28);
    r5 = (r3 + r6);
    MemoryInline::FlatWrite8((r5 + 2832), static_cast<uint8_t>(r7));
    r6 = (r3 + r8);
    r5 = MemoryInline::FlatRead8((r6 + 25));
    MemoryInline::FlatWrite8((r9 + 25), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r6 + 16));
    MemoryInline::FlatWrite8((r9 + 16), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead8((r3 + 1));
    r5 = (r5 + -1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    goto loc_8087BD3C;
}

loc_8087BD2C:
{
    r6 = (r6 + 1);
}

loc_8087BD30:
{
    r5 = (r6 & 255);
}

loc_8087BD38:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r7))) {
        goto loc_8087BCD0;
    }
}

loc_8087BD3C:
{
    r6 = MemoryInline::FlatRead8(r3);
    r5 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_8087BD48:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8087BD54;
    }
}

loc_8087BD4C:
{
    r3 = 0;
    goto loc_8087BFCC;
}

loc_8087BD54:
{
    r9 = (r6 * 28);
    r6 = -1;
    r5 = 0;
    r7 = 0;
    r8 = (r3 + r9);
    MemoryInline::FlatWrite8((r8 + 16), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r3 + 7916));
    MemoryInline::FlatWrite8((r8 + 18), static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead8((r3 + 7916));
    MemoryInline::FlatWrite8((r8 + 19), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r8 + 20), r6);
    MemoryInline::FlatWrite8((r8 + 24), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r8 + 25), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r3 + 7916));
}

loc_8087BD90:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8087BE30;
    }
}

loc_8087BD94:
{
}

loc_8087BD98:
{
    r6 = (r5 + -8);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_8087BE04;
    }
}

loc_8087BDA0:
{
    r0 = (r6 + 7);
    r4 = 0x808E0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8087BDB4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_8087BE04;
    }
}

loc_8087BDB8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + -14024), 0, 1u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    r7 = (r7 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r8 + 27), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r8 + 27), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r8 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r8 + 29), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r8 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r8 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r8 + 32), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r8 + 33), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + -14024));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r8 + 34), static_cast<uint8_t>(r0));
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087BDB8;
    }
}

loc_8087BE04:
{
    r4 = (r3 + r9);
    r0 = (r5 - r7);
    r6 = (r7 + r4);
    r4 = 0x808E0000u;
    ctr = r0;
}

loc_8087BE1C:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r5))) {
        goto loc_8087BE30;
    }
}

loc_8087BE20:
{
    r0 = MemoryInline::FlatRead8((r4 + -14024));
    MemoryInline::FlatWrite8((r6 + 27), static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8087BE20;
    }
}

loc_8087BE30:
{
    r0 = MemoryInline::FlatRead8((r3 + 17276));
    r4 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087BE3C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087BFC8;
    }
}

loc_8087BE48:
{
    r30 = 0;
    goto loc_8087BE8C;
}

loc_8087BE50:
{
    r3 = 800;
    ctx->lr = 0x8087BE58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087BE5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087BE68;
    }
}

loc_8087BE60:
{
    r4 = (r30 & 255);
    ctx->lr = 0x8087BE68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80872CC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8087BE68:
{
    r0 = (r30 & 255);
    r0 = (r0 * 28);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8087BE88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_8087BE8C:
{
    r0 = MemoryInline::FlatRead8((r31 + 1));
    r3 = (r30 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087BE98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087BE50;
    }
}

loc_8087BE9C:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2928));
    r0 = (r3 + -3);
}

loc_8087BEB4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8087BECC;
    }
}

loc_8087BEB8:
{
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 193);
}

loc_8087BEC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087BECC;
    }
}

loc_8087BEC8:
{
    r4 = r3;
}

loc_8087BECC:
{
}

loc_8087BED0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087BF24;
    }
}

loc_8087BED4:
{
    r30 = 0;
    goto loc_8087BF14;
}

loc_8087BEDC:
{
    r3 = 212;
    ctx->lr = 0x8087BEE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087BEE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087BEF4;
    }
}

loc_8087BEEC:
{
    r4 = (r30 & 255);
    ctx->lr = 0x8087BEF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80887D8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8087BEF4:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 1020);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8052), r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8087BF10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_8087BF14:
{
    r0 = MemoryInline::FlatRead8((r31 + 7916));
    r3 = (r30 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087BF20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087BEDC;
    }
}

loc_8087BF24:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + 2932));
    r0 = (r3 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8087BF38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8087BFC0;
    }
}

loc_8087BF3C:
{
    r3 = MemoryInline::FlatRead32((r4 + 2928));
    r4 = 0;
    r0 = (r3 + -3);
}

loc_8087BF4C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8087BF64;
    }
}

loc_8087BF50:
{
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 193);
}

loc_8087BF5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087BF64;
    }
}

loc_8087BF60:
{
    r4 = r3;
}

loc_8087BF64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8087BF68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087BFC0;
    }
}

loc_8087BF6C:
{
    r30 = 0;
    goto loc_8087BFAC;
}

loc_8087BF74:
{
    r3 = 276;
    ctx->lr = 0x8087BF7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087BF80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087BF8C;
    }
}

loc_8087BF84:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    ctx->lr = 0x8087BF8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80888620u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8087BF8C:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1020);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8104), r3);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x8087BFA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + 1);
}

loc_8087BFAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 8100));
    r3 = (r30 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8087BFBC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8087BF74;
    }
}

loc_8087BFC0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 17276), static_cast<uint8_t>(r0));
}

loc_8087BFC8:
{
    r3 = 1;
}

loc_8087BFCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8087BACC func_8087BACC preserves=true fpr_mask=0x00000000
