#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A2CFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f26_entry = 0.0;
    double leaf_stack_saved_f27_entry = 0.0;
    double leaf_stack_saved_f28_entry = 0.0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A2CFC;

loc_805A2CFC:
{
    leaf_stack_saved_f26_entry = f26.d;
    leaf_stack_saved_f27_entry = f27.d;
    leaf_stack_saved_f28_entry = f28.d;
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f26.d = f1.d;
    r0 = MemoryInline::FlatRead32(r6);
    f27.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80890000u;
    r7 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    f28.d = f3.d;
    r6 = MemoryInline::FlatRead32((r6 + 8));
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    r31 = (r31 + 8728);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead16((r3 + 820));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 164));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 312));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2D88:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 320));
    f5.d = PpcFmulsInline(f6.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f6.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2F90;
    }
}

loc_805A2DCC:
{
    r5 = MemoryInline::FlatRead32((r3 + 392));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r4 = 1;
    f29.d = MemoryInline::FlatReadFloat32((r5 + 12));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
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

loc_805A2DE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805A2E20;
    }
}

loc_805A2DEC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_805A2DFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_805A2E08;
    }
}

loc_805A2E00:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 288));
    goto loc_805A2E0C;
}

loc_805A2E08:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 300));
}

loc_805A2E0C:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 836));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 836), f29.d);
}

loc_805A2E20:
{
    r3 = r30;
    // inline leaf 0x805909C8 (11 guest instruction(s))
}

loc_inl1_0x805909C8:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x805909D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x805909E8;
    }
}

loc_inl1_0x805909DC:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_inl1_cont_805909C8;
}

loc_inl1_0x805909E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    f1.d = MemoryInline::FlatReadFloat32(r3);
}

loc_inl1_cont_805909C8:
{
    // end of inlined leaf 0x805909C8
    f31.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r6 = 0x802A0000u;
    f30.d = MemoryInline::FlatReadFloat32(r31);
    r5 = (r6 + 16688);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    f29.d = f30.d;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 136));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r4 = MemoryInline::FlatRead32(r30);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2E80:
{
    f0.d = std::fabs(f0.d);
    f27.d = PpcFmulsInline(f27.d, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A2EB4;
    }
}

loc_805A2E8C:
{
    f30.d = MemoryInline::FlatReadFloat32((r31 + 320));
    r3 = r30;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f0.d = f29.d;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A2EA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A2EB4;
    }
}

loc_805A2EA8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 276));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 280));
    f29.d = PpcFmulsInline(f1.d, f0.d);
}

loc_805A2EB4:
{
    f4.d = MemoryInline::FlatReadFloat32((r28 + 268));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 272));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f4.d));
    r0 = MemoryInline::FlatRead16((r28 + 820));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 260));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2ED0:
{
    f3.d = PpcFmulsInline(f26.d, f3.d);
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f27.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 268), f3.d);
    MemoryInline::FlatWriteFloat32((r28 + 272), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A2F44;
    }
}

loc_805A2EF0:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 264));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 244));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 324));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 264), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A2F08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A2F10;
    }
}

loc_805A2F0C:
{
    MemoryInline::FlatWriteFloat32((r28 + 264), f0.d);
}

loc_805A2F10:
{
    r0 = MemoryInline::FlatRead16((r28 + 820));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2F18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2F6C;
    }
}

loc_805A2F1C:
{
    r3 = r30;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A2F30:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A2F6C;
    }
}

loc_805A2F34:
{
    r0 = MemoryInline::FlatRead16((r28 + 820));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r28 + 820), static_cast<uint16_t>(r0));
    goto loc_805A2F6C;
}

loc_805A2F44:
{
    f0.d = PpcFmulsInline(f5.d, f26.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 264));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 260), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 264), f0.d);
}

loc_805A2F6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 264));
    MemoryInline::FlatWriteFloat32((r28 + 176), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r28 + 172), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 180), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 176), f0.d);
}

loc_805A2F90:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = leaf_stack_saved_f28_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = leaf_stack_saved_f27_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = leaf_stack_saved_f26_entry;
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0xFC00005F fpr_write=0xFC00007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805A2CFC func_805A2CFC preserves=true fpr_mask=0x00000000
