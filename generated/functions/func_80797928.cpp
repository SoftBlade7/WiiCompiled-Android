#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80797928(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r0_subfc_min_5 = 0;
    uint32_t r0_subfc_min_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_0 = 0;
    uint32_t r29_psq_tmp_1 = 0;
    uint32_t r29_psq_tmp_2 = 0;
    uint32_t r29_psq_tmp_3 = 0;
    uint32_t r29_psq_tmp_4 = 0;
    uint32_t r29_psq_tmp_5 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_adde_right_5 = 0;
    uint32_t r3_adde_right_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80797928;

loc_80797928:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20864);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r30 = (r30_rot_0 & 1);
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
    r5 = MemoryInline::FlatRead16((r3 + 44));
    r3 = -65536;
    r4 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r3 + 3583);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 1);
}

loc_80797978:
{
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807979AC;
    }
}

loc_80797984:
{
}

loc_80797988:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079799C;
    }
}

loc_8079798C:
{
    r0 = (r0 & 65535);
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_807979C0;
}

loc_8079799C:
{
    r0 = (r0 & 65535);
    r0 = (r0 | 12288);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_807979C0;
}

loc_807979AC:
{
}

loc_807979B0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_807979C0;
    }
}

loc_807979B4:
{
    r0 = (r0 & 65535);
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_807979C0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807979D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807979E4;
    }
}

loc_807979D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 568), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 569), static_cast<uint8_t>(r0));
    goto loc_807981BC;
}

loc_807979E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 568), static_cast<uint8_t>(r0));
    r3 = r29;
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    f2.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 572));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80797A00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80797A20;
    }
}

loc_80797A04:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80797A10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80797A18;
    }
}

loc_80797A14:
{
    goto loc_80797A38;
}

loc_80797A18:
{
    f2.d = f0.d;
    goto loc_80797A38;
}

loc_80797A20:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80797A2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80797A34;
    }
}

loc_80797A30:
{
    goto loc_80797A38;
}

loc_80797A34:
{
    f2.d = f0.d;
}

loc_80797A38:
{
    r4 = MemoryInline::FlatRead32((r29 + 576));
    r3 = r29;
    MemoryInline::FlatWriteFloat32((r29 + 572), f2.d);
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r29 + 576), r0);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    r4 = (r1 + 8);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r29_psq_tmp_1 = (r29 + 36);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r29_psq_tmp_2 = (r29 + 44);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_2));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_3 = (r29 + 52);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    r5 = MemoryInline::FlatRead32((r29 + 52));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    r0 = MemoryInline::FlatRead32((r29 + 56));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r29_psq_tmp_4 = (r29 + 60);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r29_psq_tmp_4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r29 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteFloat32((r29 + 44), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r29 + 60));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x80797AACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807872C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 32768);
}

loc_80797ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797AEC;
    }
}

loc_80797AC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80797ACC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80797AD4;
    }
}

loc_80797AD0:
{
    goto loc_80797AE8;
}

loc_80797AD4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80797ADC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80797AE4;
    }
}

loc_80797AE0:
{
    goto loc_80797AE8;
}

loc_80797AE4:
{
    f1.d = f0.d;
}

loc_80797AE8:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
}

loc_80797AEC:
{
    r3 = r29;
    // inline leaf 0x807BD78C (10 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r3 = 4259840;
    r0 = (r3 + -32767);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x807BD78C
}

loc_80797AF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80797B04;
    }
}

loc_80797AFC:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80797B10;
}

loc_80797B04:
{
    r3 = r29;
    // inline leaf 0x80590CE4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = (r3 + 228);
    // end of inlined leaf 0x80590CE4
    f31.d = MemoryInline::FlatReadFloat32((r3 + 4));
}

loc_80797B10:
{
    r3 = r29;
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 48u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80797B30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80797B44;
    }
}

loc_80797B34:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    goto loc_80797B54;
}

loc_80797B44:
{
    f1.d = (-(f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_80797B54:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 64));
    r0 = MemoryInline::FlatRead16((r29 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80797B68:
{
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 64), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80797C0C;
    }
}

loc_80797B78:
{
    r3 = MemoryInline::FlatRead32(r29);
    r5 = 1;
    r6 = 1;
    r4 = 1;
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 16);
}

loc_80797B94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797BA8;
    }
}

loc_80797B98:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r0 & 27);
}

loc_80797BA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797BA8;
    }
}

loc_80797BA4:
{
    r4 = 0;
}

loc_80797BA8:
{
}

loc_80797BAC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80797BC8;
    }
}

loc_80797BB0:
{
    r3 = 34340864;
    r4 = MemoryInline::FlatRead32((r7 + 12));
    r0 = (r3 + 256);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797BC8;
    }
}

loc_80797BC4:
{
    r6 = 0;
}

loc_80797BC8:
{
}

loc_80797BCC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80797BE8;
    }
}

loc_80797BD0:
{
    r3 = 458752;
    r4 = MemoryInline::FlatRead32((r7 + 20));
    r0 = (r3 + 20096);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797BE8;
    }
}

loc_80797BE4:
{
    r5 = 0;
}

loc_80797BE8:
{
}

loc_80797BEC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80797EB8;
    }
}

loc_80797BF0:
{
    r0 = MemoryInline::FlatRead32((r7 + 16));
    r0 = (r0 & 64);
}

loc_80797BF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797EB8;
    }
}

loc_80797BFC:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 & -1025);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797EB8;
}

loc_80797C0C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r5 = 1;
    r6 = 1;
    r4 = 1;
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 16);
}

loc_80797C28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797C3C;
    }
}

loc_80797C2C:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r0 & 27);
}

loc_80797C34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797C3C;
    }
}

loc_80797C38:
{
    r4 = 0;
}

loc_80797C3C:
{
}

loc_80797C40:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80797C5C;
    }
}

loc_80797C44:
{
    r3 = 34340864;
    r4 = MemoryInline::FlatRead32((r7 + 12));
    r0 = (r3 + 256);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797C5C;
    }
}

loc_80797C58:
{
    r6 = 0;
}

loc_80797C5C:
{
}

loc_80797C60:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80797C7C;
    }
}

loc_80797C64:
{
    r3 = 458752;
    r4 = MemoryInline::FlatRead32((r7 + 20));
    r0 = (r3 + 20096);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797C7C;
    }
}

loc_80797C78:
{
    r5 = 0;
}

loc_80797C7C:
{
}

loc_80797C80:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80797C94;
    }
}

loc_80797C84:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797EB8;
}

loc_80797C94:
{
    r4 = MemoryInline::FlatRead16((r29 + 12));
    r0 = -208;
    r3 = r29;
    r0 = (r4 & r0);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80797CB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80797CCC;
    }
}

loc_80797CBC:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797CE4;
}

loc_80797CCC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80797CD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80797CE4;
    }
}

loc_80797CD8:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80797CE4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80797CEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80797D00;
    }
}

loc_80797CF0:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797D18;
}

loc_80797D00:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80797D08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80797D18;
    }
}

loc_80797D0C:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80797D18:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 & 8192);
}

loc_80797D20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797DD8;
    }
}

loc_80797D24:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80797D38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80797D44;
    }
}

loc_80797D3C:
{
    r0 = 0;
    goto loc_80797DC4;
}

loc_80797D44:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 1);
}

loc_80797D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797D60;
    }
}

loc_80797D58:
{
    r0 = 0;
    goto loc_80797DC4;
}

loc_80797D60:
{
    r0 = (r3 & 262144);
}

loc_80797D64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797D70;
    }
}

loc_80797D68:
{
    r0 = 0;
    goto loc_80797DC4;
}

loc_80797D70:
{
    r0 = MemoryInline::FlatRead32((r29 + 200));
}

loc_80797D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80797D8C;
    }
}

loc_80797D7C:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797DC0;
}

loc_80797D8C:
{
    r0 = MemoryInline::FlatRead32((r29 + 140));
}

loc_80797D94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80797DA8;
    }
}

loc_80797D98:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797DC0;
}

loc_80797DA8:
{
    r0 = MemoryInline::FlatRead32((r29 + 88));
}

loc_80797DB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797DC0;
    }
}

loc_80797DB4:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80797DC0:
{
    r0 = 1;
}

loc_80797DC4:
{
}

loc_80797DC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797DD8;
    }
}

loc_80797DCC:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80797DD8:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 & 256);
}

loc_80797DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797EAC;
    }
}

loc_80797DE4:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r3 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80797DEC:
{
    r0 = (r3 & -257);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80797EAC;
    }
}

loc_80797DF8:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_3 = r0;
    r0 = (r0_subfc_min_3 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_3) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_3 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_3);
    r3 = (r3 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80797E0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80797E18;
    }
}

loc_80797E10:
{
    r0 = 0;
    goto loc_80797E98;
}

loc_80797E18:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 1);
}

loc_80797E28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797E34;
    }
}

loc_80797E2C:
{
    r0 = 0;
    goto loc_80797E98;
}

loc_80797E34:
{
    r0 = (r3 & 262144);
}

loc_80797E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797E44;
    }
}

loc_80797E3C:
{
    r0 = 0;
    goto loc_80797E98;
}

loc_80797E44:
{
    r0 = MemoryInline::FlatRead32((r29 + 200));
}

loc_80797E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80797E60;
    }
}

loc_80797E50:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797E94;
}

loc_80797E60:
{
    r0 = MemoryInline::FlatRead32((r29 + 140));
}

loc_80797E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80797E7C;
    }
}

loc_80797E6C:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    goto loc_80797E94;
}

loc_80797E7C:
{
    r0 = MemoryInline::FlatRead32((r29 + 88));
}

loc_80797E84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797E94;
    }
}

loc_80797E88:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80797E94:
{
    r0 = 1;
}

loc_80797E98:
{
}

loc_80797E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797EAC;
    }
}

loc_80797EA0:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80797EAC:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
}

loc_80797EB8:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 14528));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_80797EC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80797ED0;
    }
}

loc_80797EC8:
{
    r3 = (r29 + 180);
    ctx->lr = 0x80797ED0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807955C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_80797ED0:
{
    r0 = MemoryInline::FlatRead32((r29 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_80797ED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80797EE4;
    }
}

loc_80797EDC:
{
    r3 = (r29 + 180);
    ctx->lr = 0x80797EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079231Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80797EE4:
{
    r0 = MemoryInline::FlatRead8((r29 + 26));
}

loc_80797EEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80797F04;
    }
}

loc_80797EF0:
{
    r0 = MemoryInline::FlatRead8((r29 + 580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80797EF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80797F04;
    }
}

loc_80797EFC:
{
    r3 = (r29 + 180);
    ctx->lr = 0x80797F04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80795668u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80797F04:
{
    r0 = MemoryInline::FlatRead32((r29 + 140));
}

loc_80797F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80797FB8;
    }
}

loc_80797F10:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r29 + 24));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80797F30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80797F40;
    }
}

loc_80797F34:
{
    r3 = (r29 + 136);
    r4 = 0;
    ctx->lr = 0x80797F40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BC9F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80797F40:
{
    r0 = MemoryInline::FlatRead32((r29 + 140));
    r3 = 0;
}

loc_80797F4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80797F60;
    }
}

loc_80797F50:
{
    r0 = MemoryInline::FlatRead32((r29 + 160));
}

loc_80797F58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80797F60;
    }
}

loc_80797F5C:
{
    r3 = 1;
}

loc_80797F60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80797F64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80797FB0;
    }
}

loc_80797F68:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 & 578);
}

loc_80797F70:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(578));
}

loc_80797F74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80797FB0;
    }
}

loc_80797F78:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80797F88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80797FB0;
    }
}

loc_80797F8C:
{
    r3 = (r29 + 180);
    r4 = 0;
    ctx->lr = 0x80797F98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80791910u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r3 = (r3 & -49);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite32((r29 + 20), r0);
}

loc_80797FB0:
{
    r3 = (r29 + 136);
    ctx->lr = 0x80797FB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BC6E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80797FB8:
{
    r0 = MemoryInline::FlatRead32((r29 + 88));
}

loc_80797FC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798164;
    }
}

loc_80797FC4:
{
    r0 = MemoryInline::FlatRead32((r29 + 564));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_80797FCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80797FE0;
    }
}

loc_80797FD0:
{
    r3 = 0x809C0000u;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    ctx->lr = 0x80797FE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80715648u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80797FE0:
{
    r3 = (r29 + 84);
    ctx->lr = 0x80797FE8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BA37Cu>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80797FEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798164;
    }
}

loc_80797FF0:
{
    r28 = MemoryInline::FlatRead32((r29 + 116));
    r3 = (r29 + 84);
    r30 = MemoryInline::FlatRead8((r29 + 130));
    ctx->lr = 0x80798000u;
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
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807BA2D8u>(ctx);
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
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(14));
}

loc_80798004:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80798044;
    }
}

loc_80798008:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r29 + 24));
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    ctx->lr = 0x80798018u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079A298u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    r5 = MemoryInline::FlatRead32((r29 + 564));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
}

loc_80798020:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80798164;
    }
}

loc_80798024:
{
    r3 = 0x809C0000u;
    r4 = 228;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80798040u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80798164;
}

loc_80798044:
{
    r0 = MemoryInline::FlatRead8((r29 + 24));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13848));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80798060:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079812C;
    }
}

loc_80798064:
{
    r0 = MemoryInline::FlatRead32((r4 + 88));
}

loc_8079806C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079809C;
    }
}

loc_80798070:
{
    r3 = MemoryInline::FlatRead32((r4 + 116));
    r0 = 0;
}

loc_8079807C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_80798088;
    }
}

loc_80798080:
{
}

loc_80798084:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_8079808C;
    }
}

loc_80798088:
{
    r0 = 1;
}

loc_8079808C:
{
}

loc_80798090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079809C;
    }
}

loc_80798094:
{
    r5 = 1;
    goto loc_80798120;
}

loc_8079809C:
{
    r3 = MemoryInline::FlatRead32((r4 + 140));
    r5 = 1;
    r6 = 0;
}

loc_807980AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(20))) {
        goto loc_807980D4;
    }
}

loc_807980B0:
{
}

loc_807980B4:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_807980C4;
    }
}

loc_807980BC:
{
}

loc_807980C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_807980C8;
    }
}

loc_807980C4:
{
    r0 = 1;
}

loc_807980C8:
{
}

loc_807980CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807980D4;
    }
}

loc_807980D0:
{
    r6 = 1;
}

loc_807980D4:
{
}

loc_807980D8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80798120;
    }
}

loc_807980DC:
{
    r0 = MemoryInline::FlatRead32((r4 + 200));
    r6 = 0;
}

loc_807980E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80798114;
    }
}

loc_807980EC:
{
    r3 = MemoryInline::FlatRead32((r4 + 204));
    r0 = 0;
}

loc_807980F8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_80798104;
    }
}

loc_807980FC:
{
}

loc_80798100:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(5))) {
        goto loc_80798108;
    }
}

loc_80798104:
{
    r0 = 1;
}

loc_80798108:
{
}

loc_8079810C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798114;
    }
}

loc_80798110:
{
    r6 = 1;
}

loc_80798114:
{
}

loc_80798118:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80798120;
    }
}

loc_8079811C:
{
    r5 = 0;
}

loc_80798120:
{
}

loc_80798124:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079812C;
    }
}

loc_80798128:
{
    r30 = 1;
}

loc_8079812C:
{
    r4 = r28;
    r5 = r30;
    r3 = (r29 + 136);
    // inline leaf 0x807BC940 (15 guest instruction(s))
    r0 = (r4 * 28);
    r6 = 0x809C0000u;
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r4 = 0;
    r6 = (r6 + 13984);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead8((r6 + 16));
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    MemoryInline::FlatWrite32((r3 + 36), r4);
    // end of inlined leaf 0x807BC940
    r5 = MemoryInline::FlatRead32((r29 + 564));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
}

loc_80798144:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80798164;
    }
}

loc_80798148:
{
    r3 = 0x809C0000u;
    r4 = 227;
    r3 = MemoryInline::FlatRead32((r3 + 10320));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 32));
    ctr = r12;
    ctx->lr = 0x80798164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80798164:
{
    r0 = MemoryInline::FlatRead8((r29 + 68));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_8079816C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807981B4;
    }
}

loc_80798170:
{
    r3 = r29;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r30 = r3;
    r3 = (r29 + 68);
    r4 = r30;
    ctx->lr = 0x80798188u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807B8A9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = r30;
    r3 = (r29 + 72);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_8079819C:
{
    r0 = cr;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807981A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807981B4;
    }
}

loc_807981A8:
{
    r4 = r30;
    r3 = (r29 + 68);
    ctx->lr = 0x807981B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x807B8F30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_807981B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 569), static_cast<uint8_t>(r0));
}

loc_807981BC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80797928 func_80797928 preserves=false fpr_mask=0x80000000
