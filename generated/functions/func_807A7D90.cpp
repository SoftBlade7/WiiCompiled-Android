#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A7D90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A7D90;

loc_807A7D90:
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
    r31 = (r31 + 22208);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 424));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A7DC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7EF4;
    }
}

loc_807A7DCC:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A7DD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7EF4;
    }
}

loc_807A7DD8:
{
    r5 = MemoryInline::FlatRead32((r3 + 164));
    r3 = 538968064;
    r0 = (r3 + 8224);
    r3 = MemoryInline::FlatRead32((r5 + 32));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7EF4;
    }
}

loc_807A7DF0:
{
    r3 = (r5 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A7DFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7EF4;
    }
}

loc_807A7E00:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r5 + r0);
    f31.d = MemoryInline::FlatReadFloat32((r3 + 12));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807A7E14:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A7E38;
    }
}

loc_807A7E1C:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807A7E38u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80026050u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
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
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807A7E38:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_807A7E40:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7E4C;
    }
}

loc_807A7E48:
{
    goto loc_807A7E58;
}

loc_807A7E4C:
{
    f1.d = f31.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28972));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28968));
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f1.d = PpcFmulsInline(f31.d, f1.d);
}

loc_807A7E58:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 268));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 276));
    f3.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_807A7E6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A7E74;
    }
}

loc_807A7E70:
{
    goto loc_807A7E88;
}

loc_807A7E74:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 272));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_807A7E88:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807A7E90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A7E98;
    }
}

loc_807A7E94:
{
    goto loc_807A7EAC;
}

loc_807A7E98:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 272));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807A7EA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A7EA8;
    }
}

loc_807A7EA4:
{
    goto loc_807A7EAC;
}

loc_807A7EA8:
{
    f0.d = f3.d;
}

loc_807A7EAC:
{
    f0.d = PPC_Fctiwz(f0.d);
    r30 = (r28 + 428);
    r28 = 0;
    r31 = 0;
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r29 = fctiwzword0;
}

loc_807A7EC4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = r30;
    r5 = (r1 + 12);
    r4 = 1;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x807A7EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80050EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r28 = (r28 + 1);
    r30 = (r30 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_807A7EF0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807A7EC4;
    }
}

loc_807A7EF4:
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
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A7D90 func_807A7D90 preserves=false fpr_mask=0x80000000
