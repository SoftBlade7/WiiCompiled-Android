#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008EF20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8008EF20;

loc_8008EF20:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -192), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 196u, (r1 + 196), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 160u, (r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 144u, (r1 + 144), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 128u, (r1 + 128), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 112u, (r1 + 112), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 96u, (r1 + 96), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 80u, (r1 + 80), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_3, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28712), 0, 16u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28712));
    r0 = 1127219200;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 176u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 148u, (r3 + 164));
    r31 = r3;
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 16));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r5 = MemoryInline::ReadResolved32(guest_range_1, 140u, (r3 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 44));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 144u, (r3 + 160));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r0);
}

loc_8008EF9C:
{
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r5))) {
        goto loc_8008EFAC;
    }
}

loc_8008EFA4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r3 + 152));
    goto loc_8008EFE8;
}

loc_8008EFAC:
{
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = (r5 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 132u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r3 + 152));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 132u, (r3 + 148));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008EFE8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r3 + 96));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r3 + 100));
}

loc_8008EFF8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8008F004;
    }
}

loc_8008EFFC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r3 + 92));
    goto loc_8008F040;
}

loc_8008F004:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = (r4 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 72u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r3 + 92));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 72u, (r3 + 88));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008F040:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r3 + 112));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r3 + 116));
}

loc_8008F050:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8008F05C;
    }
}

loc_8008F054:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r3 + 108));
    goto loc_8008F098;
}

loc_8008F05C:
{
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r0 = (r4 ^ -2147483648);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -28704));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 40));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 88u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 92u, (r3 + 108));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 88u, (r3 + 104));
        }
    }
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8008F098:
{
    f31.d = PpcFmulsInline(f31.d, f0.d);
    f28.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28712));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 160u, (r3 + 176));
    r29 = r31;
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28708));
    r30 = (r1 + 24);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 152u, (r3 + 168));
    f28.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r3 + 52));
    r27 = 0;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r3 + 56));
    f28.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r3 + 80));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r3 + 48));
    f28.d = PpcFmulsInline(f28.d, f0.d);
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28708));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 156u, (r3 + 172));
    f31.d = PpcFmulsInline(f31.d, f2.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f1.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r3 + 84));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r3 + 76));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f2.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r3 + 60));
    f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 164u, (r3 + 180));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r3 + 68));
    f31.d = PpcFmulsInline(f31.d, f3.d);
    f26.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28712));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 172u, (r3 + 188));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 48));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f2.d));
    f26.d = PpcFmulsInline(f26.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 56));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f1.d));
    r28 = MemoryInline::ReadResolved32(guest_range_1, 168u, (r3 + 184));
    f26.d = PpcFmulsInline(f26.d, f0.d);
    f25.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28712));
}

loc_8008F134:
{
    MemoryInline::FlatWriteFloat32(r30, f25.d);
    r4 = r27;
    guest_range_2 = MemoryInline::ResolveRangeHost(r31, 0, 208u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r31 + 16));
    // inline leaf 0x800A3610 (4 guest instruction(s))
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    // end of inlined leaf 0x800A3610
    f2.d = MemoryInline::FlatReadFloat32(r30);
    r27 = (r27 + 1);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(4));
}

loc_8008F154:
{
    f1.d = PpcFmulsInline(f2.d, f1.d);
    r29 = (r29 + 4);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r30 = (r30 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008F134;
    }
}

loc_8008F16C:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28708));
    r3 = r31;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 196u, (r31 + 196));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r31 + 16));
    f25.d = f7.d;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 200u, (r31 + 200));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 204u, (r31 + 204));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 80));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 12u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 8), f7.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 8), f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r31 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 12), f7.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 8), f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 192u, (r31 + 192));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 12), f4.d);
    r12 = MemoryInline::ReadResolved32(guest_range_2, 0u, r31);
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 16), f7.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 16), f2.d);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f4.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 12), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 16), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 8), f0.d);
    ctr = r12;
    ctx->lr = 0x8008F1FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteFloat32((r3 + 4), f31.d);
    r27 = r3;
    r31 = (r1 + 24);
    r29 = 0;
    MemoryInline::FlatWriteFloat32((r3 + 12), f30.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f29.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f28.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f27.d);
    MemoryInline::FlatWrite32((r3 + 28), r28);
    MemoryInline::FlatWriteFloat32((r3 + 32), f26.d);
}

loc_8008F224:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r27;
    r4 = r29;
    // inline leaf 0x8008E060 (4 guest instruction(s))
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 60), f1.d);
    // end of inlined leaf 0x8008E060
    r29 = (r29 + 1);
    r31 = (r31 + 4);
}

loc_8008F240:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(4))) {
        goto loc_8008F224;
    }
}

loc_8008F244:
{
    MemoryInline::FlatWriteFloat32((r27 + 36), f25.d);
    r31 = (r1 + 8);
    r28 = 0;
}

loc_8008F250:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r27;
    r4 = r28;
    // inline leaf 0x8008E040 (4 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x8008E040
    r28 = (r28 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8008F26C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8008F250;
    }
}

loc_8008F270:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 60), 0, 140u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 116u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 100u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 84u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 68u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 52u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 36u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 20u, (r1 + 80));
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_5, 136u, (r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFF1F fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8008EF20 func_8008EF20 preserves=false fpr_mask=0xFE000000
