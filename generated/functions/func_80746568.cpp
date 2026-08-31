#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80746568(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_80746568;

loc_80746568:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 11192);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
    r30 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
    r29 = r3;
    f3.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f4.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f2.d);
    f2.d = PpcFmulsInline(f4.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r1 + 20), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r1 + 24), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x807465C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f3.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807465E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746604;
    }
}

loc_807465E8:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r3 = (r3 + 22260);
    r4 = 627;
    r5 = (r5 + 22224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80746604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
}

loc_80746604:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_8074660C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80746618;
    }
}

loc_80746614:
{
    goto loc_80746624;
}

loc_80746618:
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

loc_80746624:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    ctx->lr = 0x8074663Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80243A78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8074664C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746680;
    }
}

loc_80746650:
{
    r3 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -18652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80746660:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8074666C;
    }
}

loc_80746664:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    goto loc_80746694;
}

loc_8074666C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80746694;
}

loc_80746680:
{
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_80746684:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746690;
    }
}

loc_80746688:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_80746694;
}

loc_80746690:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 56));
}

loc_80746694:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 20), f2.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807466A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807466B0;
    }
}

loc_807466A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    goto loc_807466B4;
}

loc_807466B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
}

loc_807466B4:
{
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 88));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 92));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_807466C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807466CC;
    }
}

loc_807466C8:
{
    f3.d = f2.d;
}

loc_807466CC:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807466D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807466E0;
    }
}

loc_807466DC:
{
    f3.d = f0.d;
}

loc_807466E0:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    r4 = 0x808D0000u;
    f1.d = PPC_Fctiwz(f1.d);
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -844));
    r4 = (r4 + -18584);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 24));
    r3 = fctiwzword0;
    f1.d = PpcFmulsInline(f2.d, f3.d);
    f0.d = PPC_Fctiwz(f0.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    r0 = fctiwzword1;
    r5 = fctiwzword2;
    r4_addr_0 = (r4 + r5);
    r4 = MemoryInline::FlatRead8(r4_addr_0);
    r3 = (r4 * r3);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
// RECOMP_REGISTRATION base 0x80746568 func_80746568 preserves=false fpr_mask=0x80000000
