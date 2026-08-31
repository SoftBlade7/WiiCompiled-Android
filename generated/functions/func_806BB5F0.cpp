#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806BB5F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_806BB5F0;

loc_806BB5F0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + -3576);
    r0 = MemoryInline::FlatRead32((r3 + 248));
}

loc_806BB628:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806BB658;
    }
}

loc_806BB62C:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 356));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 356), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806BB648:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806BB650;
    }
}

loc_806BB64C:
{
    MemoryInline::FlatWriteFloat32((r3 + 356), f0.d);
}

loc_806BB650:
{
    r3 = r31;
    ctx->lr = 0x806BB658u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806BB840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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

loc_806BB658:
{
    r3 = MemoryInline::FlatRead32((r31 + 188));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    f5.d = MemoryInline::FlatReadFloat64((r30 + 80));
    MemoryInline::FlatWriteRam32((r1 + 64), r0);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 232));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 228));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f3.d = PpcFmulsInline(f3.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_806BB6BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806BB6D0;
    }
}

loc_806BB6C0:
{
}

loc_806BB6C4:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_806BB6D0;
    }
}

loc_806BB6C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 184), r0);
}

loc_806BB6D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 248));
}

loc_806BB6D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806BB6FC;
    }
}

loc_806BB6DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    r0 = (r0 | 1);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    goto loc_806BB724;
}

loc_806BB6FC:
{
    r3 = (r1 + 32);
    r4 = (r31 + 252);
    r5 = 3;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
}

loc_806BB724:
{
    r0 = MemoryInline::FlatRead8((r31 + 348));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806BB72C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806BB810;
    }
}

loc_806BB730:
{
    r3 = 0x808C0000u;
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 352));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 9096));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806BB744:
{
    r0 = MemoryInline::FlatRead16((r31 + 44));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 96));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r0));
    f30.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 352), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BB80C;
    }
}

loc_806BB764:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806BB770;
    }
}

loc_806BB768:
{
    r3 = (r31 + 72);
    goto loc_806BB7A0;
}

loc_806BB770:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r31 + 88);
    ctx->lr = 0x806BB784u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_806BB7A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
    f31.d = MemoryInline::FlatReadFloat32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806BB7AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806BB7B8;
    }
}

loc_806BB7B0:
{
    r4 = (r31 + 72);
    goto loc_806BB7E8;
}

loc_806BB7B8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r31 + 88);
    ctx->lr = 0x806BB7CCu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r4 = (r31 + 72);
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 80), f0.d);
}

loc_806BB7E8:
{
    r3 = MemoryInline::FlatRead16((r31 + 44));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    r3 = (r3 | 2);
    MemoryInline::FlatWrite16((r31 + 44), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r31 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 76), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 80), f30.d);
}

loc_806BB80C:
{
    MemoryInline::FlatWriteFloat32((r31 + 80), f30.d);
}

loc_806BB810:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    ctx->lr = r0;
    r1 = (r1 + 112);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806BB5F0 func_806BB5F0 preserves=false fpr_mask=0xC0000000
