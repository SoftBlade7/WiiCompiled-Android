#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058B198(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8058B198;

loc_8058B198:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r6 = MemoryInline::FlatRead32(r3);
    r4 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r4 + 12076);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    // inline leaf 0x8051E85C (16 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 20));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -832));
    r5 = 0;
    r4 = 7;
    r0 = (r0 & -129);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteRam8((r3 + 16), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 19), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8051E85C
    r31 = MemoryInline::FlatRead16((r30 + 166));
    r0 = 0;
    r3 = (r31 & 32768);
}

loc_8058B1F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8058B204;
    }
}

loc_8058B1F4:
{
    r3 = MemoryInline::FlatRead16((r30 + 96));
    r3 = (r3 | 4);
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r3));
    goto loc_8058B210;
}

loc_8058B204:
{
    r3 = MemoryInline::FlatRead16((r30 + 96));
    r3 = (r3 & -5);
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r3));
}

loc_8058B210:
{
    r3 = (r31 & 1);
}

loc_8058B214:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8058B21C;
    }
}

loc_8058B218:
{
    r0 = (r0 | 1);
}

loc_8058B21C:
{
    r3 = (r31 & 2);
}

loc_8058B220:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8058B22C;
    }
}

loc_8058B224:
{
    r0 = (r0 | 2);
    r0 = (r0 & 65535);
}

loc_8058B22C:
{
    r3 = (r31 & 4);
}

loc_8058B230:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8058B23C;
    }
}

loc_8058B234:
{
    r0 = (r0 | 8);
    r0 = (r0 & 65535);
}

loc_8058B23C:
{
    r3 = (r31 & 8);
}

loc_8058B240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8058B258;
    }
}

loc_8058B244:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r3 | 8);
    MemoryInline::FlatWrite32((r4 + 4), r3);
}

loc_8058B258:
{
    r3 = (r31 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8058B25C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058B278;
    }
}

loc_8058B268:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 | 536870912);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    goto loc_8058B284;
}

loc_8058B278:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 & -536870913);
    MemoryInline::FlatWrite32((r4 + 12), r3);
}

loc_8058B284:
{
    r3 = (r31 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8058B288:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058B2A4;
    }
}

loc_8058B294:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r3 | 16);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    goto loc_8058B2B0;
}

loc_8058B2A4:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = (r3 & -17);
    MemoryInline::FlatWrite32((r4 + 4), r3);
}

loc_8058B2B0:
{
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    r3 = r30;
    r29 = 0;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = (r31 & 256);
}

loc_8058B2C4:
{
    MemoryInline::FlatWrite32((r3 + 204), r29);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058B2E0;
    }
}

loc_8058B2CC:
{
    r3 = r30;
    r31 = 1;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWrite32((r3 + 204), r31);
    goto loc_8058B2F8;
}

loc_8058B2E0:
{
    r0 = (r31 & 512);
}

loc_8058B2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8058B2F8;
    }
}

loc_8058B2E8:
{
    r3 = r30;
    r31 = -1;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWrite32((r3 + 204), r31);
}

loc_8058B2F8:
{
    r0 = MemoryInline::FlatRead8((r30 + 162));
    r3 = r30;
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWrite16((r3 + 252), static_cast<uint16_t>(r31));
    r0 = 1127219200;
    r5 = 0x80890000u;
    r3 = 0x80890000u;
    r4 = MemoryInline::FlatRead8((r30 + 156));
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 6984));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -848));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058B33C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058B34C;
    }
}

loc_8058B344:
{
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051E960u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_8058B34C:
{
    r4 = MemoryInline::FlatRead8((r30 + 157));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    r5 = 0x80890000u;
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r5 + 6984));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -848));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058B37C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8058B38C;
    }
}

loc_8058B384:
{
    r3 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8051EA60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_8058B38C:
{
    r3 = r30;
    // inline leaf 0x80590CF8 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    // end of inlined leaf 0x80590CF8
    f2.d = MemoryInline::FlatReadFloat32((r30 + 128));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6972));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058B3A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8058B3F4;
    }
}

loc_8058B3AC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 24);
}

loc_8058B3BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8058B3F4;
    }
}

loc_8058B3C0:
{
    r4 = MemoryInline::FlatRead32((r30 + 24));
    r0 = 1127219200;
    r5 = 0x80890000u;
    r3 = 0x80890000u;
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    f2.d = MemoryInline::FlatReadFloat64((r5 + 6992));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6976));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8058B3F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8058B444;
    }
}

loc_8058B3F4:
{
    r0 = MemoryInline::FlatRead16((r30 + 96));
    r4 = 1;
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -2079326208);
}

loc_8058B414:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8058B428;
    }
}

loc_8058B418:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 2);
}

loc_8058B420:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8058B428;
    }
}

loc_8058B424:
{
    r4 = 0;
}

loc_8058B428:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8058B42C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8058B450;
    }
}

loc_8058B430:
{
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r4 = 0;
    ctx->lr = 0x8058B440u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805832E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8058B450;
}

loc_8058B444:
{
    r0 = MemoryInline::FlatRead16((r30 + 96));
    r0 = (r0 & 65534);
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
}

loc_8058B450:
{
    r0 = MemoryInline::FlatRead8((r1 + 44));
    r3 = r30;
    r0 = (r0 | 128);
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 24);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8058B478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058B198 func_8058B198 preserves=true fpr_mask=0x00000000
