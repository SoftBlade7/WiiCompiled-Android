#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806E8A60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806E8A60;

loc_806E8A60:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -336), 0, 344u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 340u, (r1 + 340), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 304);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 284u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 284u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 288u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 292u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 296u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 300u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x808A0000u;
    r0 = 1127219200;
    r31 = (r31 + 2160);
    MemoryInline::WriteResolved32(guest_range_2, 264u, (r1 + 264), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 320u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    r30 = r3;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 68));
    r28 = (r1 + 204);
    MemoryInline::WriteResolved32(guest_range_2, 272u, (r1 + 272), r0);
    r29 = 1;
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 200u, (r1 + 200), f1.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 220u, (r1 + 220), f0.d);
}

loc_806E8ABC:
{
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 68));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r31 + 264));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28964), 0, 4u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
}

loc_806E8AF0:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(5))) {
        goto loc_806E8ABC;
    }
}

loc_806E8AF8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 68));
    r28 = (r1 + 224);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 264u, (r31 + 268));
    r29 = 6;
    MemoryInline::FlatWriteRamFloat32((r1 + 220), f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r31 + 184));
    MemoryInline::FlatWriteRamFloat32((r1 + 236), f0.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
}

loc_806E8B18:
{
    r0 = (r29 + -5);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r31 + 264));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    f4.d = f2.d;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r31 + 68));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 264u, (r31 + 268));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
}

loc_806E8B50:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(9))) {
        goto loc_806E8B18;
    }
}

loc_806E8B58:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 264u, (r31 + 268));
    r28 = (r1 + 240);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    r29 = 10;
    MemoryInline::FlatWriteRamFloat32((r1 + 236), f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 256), f0.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
}

loc_806E8B78:
{
    r0 = (r29 + -9);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 264u, (r31 + 268));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r31 + 264));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r31 + 76));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
}

loc_806E8BB0:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(14))) {
        goto loc_806E8B78;
    }
}

loc_806E8BB8:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    r28 = (r1 + 144);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 268u, (r31 + 272));
    r29 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 272u, (r31 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f0.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
}

loc_806E8BD8:
{
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 276u, (r31 + 280));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 268u, (r31 + 272));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 280u, (r31 + 284));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
}

loc_806E8C0C:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_806E8BD8;
    }
}

loc_806E8C14:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 268u, (r31 + 272));
    r28 = (r1 + 156);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r31 + 288));
    r29 = 4;
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 288u, (r31 + 292));
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f0.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
}

loc_806E8C34:
{
    r0 = (r29 + -3);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 268u, (r31 + 272));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 280u, (r31 + 284));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r31 + 288));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r31 + 296));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
}

loc_806E8C6C:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(9))) {
        goto loc_806E8C34;
    }
}

loc_806E8C74:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r31 + 288));
    r28 = (r1 + 180);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    r29 = 10;
    MemoryInline::FlatWriteRamFloat32((r1 + 176), f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f0.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
}

loc_806E8C94:
{
    r0 = (r29 + -9);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 284u, (r31 + 288));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 292u, (r31 + 296));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 296u, (r31 + 300));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
}

loc_806E8CCC:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(14))) {
        goto loc_806E8C94;
    }
}

loc_806E8CD4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    r28 = (r1 + 84);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 300u, (r31 + 304));
    r29 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r31 + 132));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
}

loc_806E8CF4:
{
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 296u, (r31 + 300));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 300u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 300u, (r31 + 304));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 304u, (r31 + 308));
        }
    }
    f5.d = PpcFmulsInline(f31.d, f0.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
}

loc_806E8D28:
{
    r28 = (r28 + 4);
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(5))) {
        goto loc_806E8CF4;
    }
}

loc_806E8D30:
{
    r29 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 300u, (r31 + 304));
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
    f3.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 304u, (r31 + 308));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    f5.d = PpcFmulsInline(f4.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 308u, (r31 + 312));
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 300u, (r31 + 304));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    f1.d = f4.d;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 308u, (r31 + 312));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f4.d);
    f5.d = PpcFmulsInline(f5.d, f0.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 312u, (r31 + 316));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f3.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 272));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 316u, (r31 + 320));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 60));
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f1.d);
    f1.d = f4.d;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 312u, (r31 + 316));
    f5.d = PpcFmulsInline(f5.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f3.d);
    // inline leaf 0x80085070 (16 guest instruction(s))
    f6.d = PpcFmulsInline(f5.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28964));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f5.d = PpcFmulsInline(f5.d, f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f0.d));
    f4.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    // end of inlined leaf 0x80085070
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 316u, (r31 + 320));
    r28 = (r1 + 128);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 4));
    r29 = 12;
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f1.d);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 272u, (r31 + 276));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f2.d);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 44u, (r31 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
}

loc_806E8E0C:
{
    r0 = (r29 + -11);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    f3.d = f2.d;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 320));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 264));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 324));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f5.d = PpcFmulsInline(f31.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x80085070u>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    r29 = (r29 + 1);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(14));
}

loc_806E8E44:
{
    r28 = (r28 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806E8E0C;
    }
}

loc_806E8E4C:
{
    f30.d = MemoryInline::FlatReadFloat32((r31 + 44));
    r29 = (r1 + 200);
    f31.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r31 = (r1 + 80);
    r28 = (r1 + 140);
    r30 = (r30 + 312);
    r27 = 0;
}

loc_806E8E68:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r3 = (r1 + 32);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    r4 = (r1 + 20);
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    ctx->lr = 0x806E8E88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FF98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r27 = (r27 + 1);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(15));
}

loc_806E8E98:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f31.d);
    r29 = (r29 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r31 = (r31 + 4);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    r28 = (r28 + 4);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f1.d);
    guest_range_3 = MemoryInline::ResolveRangeHost(r30, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r30, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r30 + 4), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r30 + 8), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r30 + 12), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r30 + 16), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r30 + 20), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r30 + 24), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r30 + 28), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r30 + 32), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r30 + 36), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r30 + 40), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r30 + 44), f2.d);
    r30 = (r30 + 48);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806E8E68;
    }
}

loc_806E8F24:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 320));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 304);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 304));
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -20), 0, 20u, true, false);
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 340));
    ctx->lr = r0;
    r1 = (r1 + 336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
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
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800001F gpr_write=0xF800081B gpr_return=0x00000018 fpr_read=0xC00000FF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806E8A60 func_806E8A60 preserves=false fpr_mask=0xC0000000
