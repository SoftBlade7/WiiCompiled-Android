#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8023DE7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8023DE7C;

loc_8023DE7C:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8023DE9C:
{
    MemoryInline::FlatWriteRam32((r1 + 188), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 184), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 180), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 176), r28);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023E010;
    }
}

loc_8023DEBC:
{
    r28 = MemoryInline::FlatRead32((r3 + 60));
    r0 = (r1 + 72);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    r5 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r4 = 1;
    f30.d = MemoryInline::FlatReadFloat32((r3 + 68));
    r6 = 1;
    f31.d = MemoryInline::FlatReadFloat32((r3 + 64));
    r3 = r0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25240), 0, 816u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 808u, (r2 + -24432));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 812u, (r2 + -24428));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
    // inline leaf 0x802276C0 (25 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25240));
    r8 = 0x802A0000u;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25228));
    r8 = (r8 + 12416);
    r7 = MemoryInline::FlatRead32(r5);
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r5 + 4));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -25236));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -25232));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 56), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r3 + 48), f0.d);
    MemoryInline::WriteResolved16(guest_range_1, 52u, (r3 + 52), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802276C0
    r3 = 0x802A0000u;
}

loc_8023DF00:
{
    r3 = (r3 + 16140);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 128), r3);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f30.d);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8023DF20;
    }
}

loc_8023DF1C:
{
    goto loc_8023DF24;
}

loc_8023DF20:
{
    r28 = MemoryInline::FlatRead32((r13 + -23788));
}

loc_8023DF24:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
}

loc_8023DF2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r28))) {
        goto loc_8023DF40;
    }
}

loc_8023DF30:
{
    r0 = MemoryInline::FlatRead16((r1 + 124));
    MemoryInline::FlatWriteRam32((r1 + 132), r28);
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam16((r1 + 124), static_cast<uint16_t>(r0));
}

loc_8023DF40:
{
    r0 = MemoryInline::FlatRead16((r29 + 52));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DF48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023DF6C;
    }
}

loc_8023DF4C:
{
    r3 = MemoryInline::FlatRead16((r1 + 124));
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DF54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023DF60;
    }
}

loc_8023DF58:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWriteRam16((r1 + 124), static_cast<uint16_t>(r0));
}

loc_8023DF60:
{
    r0 = MemoryInline::FlatRead16((r1 + 124));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam16((r1 + 124), static_cast<uint16_t>(r0));
}

loc_8023DF6C:
{
    r4 = MemoryInline::FlatRead16((r1 + 124));
    r0 = 0;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 792u, (r2 + -24448));
    r3 = (r1 + 72);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 796u, (r2 + -24444));
    r4 = (r4 | 64);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    MemoryInline::FlatWriteRam16((r1 + 124), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    ctx->lr = 0x8023DF98u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023D4E8u>(ctx);
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f30.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r3 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f2.d = f30.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -24444));
    // inline leaf 0x8019A460 (10 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26412));
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 4);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 12);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 20), f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8019A460
    r0 = MemoryInline::FlatRead32((r1 + 76));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -24448));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8023DFBC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8023DFC8;
    }
}

loc_8023DFC4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f30.d));
}

loc_8023DFC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24448));
    r7 = (r1 + 8);
    r11 = MemoryInline::FlatRead8(r31);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1);
    r10 = MemoryInline::FlatRead8((r31 + 1));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(31));
    r5 = (r5_rot_1 & 1);
    r9 = MemoryInline::FlatRead8((r31 + 2));
    r3 = (r1 + 24);
    r0 = MemoryInline::FlatRead8((r31 + 3));
    r4 = (r30 & 1);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    r8 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->lr = 0x8023E010u;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8021AD78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
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
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8023E010:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r30 = MemoryInline::FlatRead32((r1 + 184));
    r29 = MemoryInline::FlatRead32((r1 + 180));
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r28 = MemoryInline::FlatRead32((r1 + 176));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8023DE7C func_8023DE7C preserves=false fpr_mask=0xC0000000
