#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80742944(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_807429FC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80742944;

loc_80742944:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808D0000u;
    r30 = (r30 + -19576);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r5 = MemoryInline::FlatRead32((r3 + 380));
    r3 = MemoryInline::FlatRead32((r4 + 11240));
    r29 = (r5 + -1);
    // inline leaf 0x80739540 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80739540
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80742980:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80742A44;
    }
}

loc_80742984:
{
    r5 = MemoryInline::FlatRead32((r31 + 236));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r31 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80742994:
{
    r4 = MemoryInline::FlatRead32((r4 + 332));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80742A44;
    }
}

loc_8074299C:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807429B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80742A44;
    }
}

loc_807429B4:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 8));
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10520));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807429D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807429E0;
    }
}

loc_807429D8:
{
    f2.d = f0.d;
    goto loc_807429F4;
}

loc_807429E0:
{
    r4 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10524));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807429EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807429F4;
    }
}

loc_807429F0:
{
    f2.d = f0.d;
}

loc_807429F4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r30 + 16);
    addr_lfsx_807429FC_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_807429FC_loc_0);
    r4 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 248));
    r5 = 0;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_80742A38;
}

loc_80742A1C:
{
    r3 = MemoryInline::FlatRead32((r4 + 232));
    r4 = (r4 + 8);
    r5 = (r5 + 1);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_80742A38:
{
    r0 = MemoryInline::FlatRead32((r31 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80742A40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80742A1C;
    }
}

loc_80742A44:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003B gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80742944 func_80742944 preserves=true fpr_mask=0x00000000
