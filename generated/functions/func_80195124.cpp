#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80195124(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80195124;

loc_80195124:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = (r3 + 196);
    f6.d = MemoryInline::FlatReadFloat32((r2 + -26516));
    r4 = -1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    f5.d = MemoryInline::FlatReadFloat32((r2 + -26512));
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    f4.d = MemoryInline::FlatReadFloat32((r2 + -26508));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = (r3 + 232);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -26504));
    MemoryInline::FlatWrite8((r3 + 1309), static_cast<uint8_t>(r30));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 164));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -29256), 0, 3712u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r13 + -29244));
    r5 = MemoryInline::FlatRead16((r3 + 1232));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -26528));
    r11 = MemoryInline::FlatRead32((r3 + 176));
    r10 = MemoryInline::FlatRead32((r3 + 180));
    MemoryInline::FlatWriteFloat32((r3 + 1268), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r13 + -29244));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1276), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r13 + -29244));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1272), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r13 + -29244));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1280), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r13 + -29236));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1284), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r13 + -29236));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 1288), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r13 + -29256));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 1292), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3708u, (r13 + -25548));
    MemoryInline::FlatWriteFloat32((r3 + 1300), f0.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 3704u, (r13 + -25552));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 1296), f3.d);
    MemoryInline::FlatWrite32((r3 + 8), r30);
    MemoryInline::FlatWrite32((r3 + 4), r30);
    MemoryInline::FlatWrite32(r3, r30);
    MemoryInline::FlatWrite16((r3 + 1228), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r3 + 1230), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite8((r3 + 94), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r3 + 1226), static_cast<uint8_t>(r30));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3696u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_0, 3696u, (r13 + -25560));
            r7 = MemoryInline::ReadResolved32(guest_range_0, 3700u, (r13 + -25556));
        }
    }
    MemoryInline::FlatWriteFloat32((r3 + 1208), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 1212), f2.d);
    r6 = MemoryInline::FlatRead32((r3 + 1208));
    MemoryInline::FlatWrite32((r3 + 40), r8);
    r5 = MemoryInline::FlatRead32((r3 + 1212));
    MemoryInline::FlatWrite32((r3 + 44), r7);
    MemoryInline::FlatWrite32((r3 + 32), r8);
    MemoryInline::FlatWrite32((r3 + 36), r7);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1200), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 1204), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 56), f2.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 3696u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 3696u, (r13 + -25560));
            r12 = MemoryInline::ReadResolved32(guest_range_0, 3700u, (r13 + -25556));
        }
    }
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    r7 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 16), f6.d);
    r9 = MemoryInline::FlatRead32((r3 + 12));
    r8 = MemoryInline::FlatRead32((r3 + 16));
    MemoryInline::FlatWrite32((r3 + 60), r31);
    MemoryInline::FlatWrite32((r3 + 64), r12);
    MemoryInline::FlatWriteFloat32((r3 + 68), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 84), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 88), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 72), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 80), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 76), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 1180), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 1184), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 1168), f0.d);
    MemoryInline::FlatWrite32((r3 + 1172), r11);
    MemoryInline::FlatWrite32((r3 + 1176), r10);
    MemoryInline::FlatWriteFloat32((r3 + 24), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f2.d);
    MemoryInline::FlatWrite32((r3 + 1188), r9);
    MemoryInline::FlatWrite32((r3 + 1192), r8);
    MemoryInline::FlatWrite32((r3 + 1196), r7);
    MemoryInline::FlatWrite32((r3 + 1216), r6);
    MemoryInline::FlatWrite32((r3 + 1220), r5);
    r5 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r13 + -29248));
    MemoryInline::FlatWrite16((r3 + 1224), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 268), static_cast<uint16_t>(r30));
}

loc_801952A8:
{
    MemoryInline::FlatWrite8((r29 + 8), static_cast<uint8_t>(r4));
    r29 = (r29 + -12);
}

loc_801952B4:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r0))) {
        goto loc_801952A8;
    }
}

loc_801952B8:
{
    r5 = (r3 + 256);
    r0 = (r3 + 244);
    r4 = -1;
}

loc_801952C4:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r4));
    r5 = (r5 + -12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_801952D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801952C4;
    }
}

loc_801952D4:
{
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 271), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1310), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000203F gpr_write=0xE0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80195124 func_80195124 preserves=true fpr_mask=0x00000000
