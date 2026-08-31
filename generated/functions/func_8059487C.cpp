#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805903F4_statefree(uint32_t);
extern "C" uint64_t func_805903F4_statefree_v0(uint32_t);

extern "C" void func_8059487C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059487C;

loc_8059487C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = 2;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 7920);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0x808B0000u;
    r28 = (r28 + 25832);
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_805948C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80594AB4;
    }
}

loc_805948CC:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r4 = MemoryInline::FlatRead32(r3);
    r5 = 1;
    r9 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r9 + 4));
    r0 = (r0 & 16);
}

loc_805948F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80594904;
    }
}

loc_805948F4:
{
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r0 = (r0 & 27);
}

loc_805948FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80594904;
    }
}

loc_80594900:
{
    r5 = 0;
}

loc_80594904:
{
}

loc_80594908:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80594924;
    }
}

loc_8059490C:
{
    r4 = 34340864;
    r5 = MemoryInline::FlatRead32((r9 + 12));
    r0 = (r4 + 256);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80594924;
    }
}

loc_80594920:
{
    r8 = 0;
}

loc_80594924:
{
}

loc_80594928:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80594944;
    }
}

loc_8059492C:
{
    r4 = 458752;
    r5 = MemoryInline::FlatRead32((r9 + 20));
    r0 = (r4 + 20096);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80594944;
    }
}

loc_80594940:
{
    r7 = 0;
}

loc_80594944:
{
}

loc_80594948:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8059495C;
    }
}

loc_8059494C:
{
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r0 = (r0 & 1024);
}

loc_80594954:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8059495C;
    }
}

loc_80594958:
{
    r6 = 0;
}

loc_8059495C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80594960:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80594AA8;
    }
}

loc_80594964:
{
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
}

loc_8059496C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80594990;
    }
}

loc_80594970:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
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
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 136), f0.d);
    r3 = MemoryInline::FlatRead32((r30 + 24));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r30 + 140), f0.d);
}

loc_80594990:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & 268435456);
}

loc_80594998:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805949CC;
    }
}

loc_8059499C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805949A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805949BC;
    }
}

loc_805949AC:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    goto loc_805949CC;
}

loc_805949BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805949CC;
    }
}

loc_805949C0:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 16777216);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_805949CC:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805949D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80594AA8;
    }
}

loc_805949D8:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805949E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80594AA8;
    }
}

loc_805949E4:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_5 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_5);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 & 1);
}

loc_805949F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594A04;
    }
}

loc_805949F8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_80594A04:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4_addr_6 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_6);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r0 = MemoryInline::FlatRead16((r3 + 68));
    r0 = (r4 & ~r0);
    r0 = (r0 & 1);
}

loc_80594A1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594A2C;
    }
}

loc_80594A20:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_80594A2C:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4_addr_7 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_7);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 & 2);
}

loc_80594A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594A4C;
    }
}

loc_80594A40:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_80594A4C:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80594A60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80594AA8;
    }
}

loc_80594A64:
{
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4_addr_8 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_8);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 & 8);
}

loc_80594A70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594A80;
    }
}

loc_80594A74:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_80594A80:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4_addr_9 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_9);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r4 = MemoryInline::FlatRead16((r3 + 44));
    r0 = MemoryInline::FlatRead16((r3 + 68));
    r0 = (r4 & ~r0);
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80594A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80594AA8;
    }
}

loc_80594A9C:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 | 128);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_80594AA8:
{
    r3 = r30;
    ctx->lr = 0x80594AB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805959D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80594BAC;
}

loc_80594AB4:
{
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    r4 = 1;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80594AC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80594BAC;
    }
}

loc_80594AC8:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80594ADC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80594BAC;
    }
}

loc_80594AE0:
{
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4_addr_11 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_11);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
}

loc_80594AE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80594AFC;
    }
}

loc_80594AEC:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x805903F4u) && KnownTranslatedCpuCall<0x805903F4u>::kAvailable && !KnownTranslatedCpuCall<0x805903F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805903F4u>()) {
        const auto state_free_result_805903F4_498E = func_805903F4_statefree_v0(r3);
        r3 = static_cast<uint32_t>(state_free_result_805903F4_498E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x805903F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 136), f0.d);
}

loc_80594AFC:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x805903F4u) && KnownTranslatedCpuCall<0x805903F4u>::kAvailable && !KnownTranslatedCpuCall<0x805903F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805903F4u>()) {
        const auto state_free_result_805903F4_5037 = func_805903F4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_805903F4_5037[0]);
        r4 = static_cast<uint32_t>(state_free_result_805903F4_5037[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x805903F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 & 1);
}

loc_80594B0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594B20;
    }
}

loc_80594B10:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_80594B2C;
}

loc_80594B20:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 & -257);
    MemoryInline::FlatWrite32((r30 + 16), r0);
}

loc_80594B2C:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 & 256);
}

loc_80594B34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594B5C;
    }
}

loc_80594B38:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 156));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    goto loc_80594B6C;
}

loc_80594B5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 156));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
}

loc_80594B6C:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 156));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80594B78:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80594B84;
    }
}

loc_80594B7C:
{
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    goto loc_80594B94;
}

loc_80594B84:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80594B8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80594B94;
    }
}

loc_80594B90:
{
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
}

loc_80594B94:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 156));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    f31.d = PpcFmulsInline(f1.d, f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    MemoryInline::FlatWriteFloat32((r3 + 548), f31.d);
}

loc_80594BAC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8059487C func_8059487C preserves=false fpr_mask=0x80000000
