#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059CB54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059CB54;

loc_8059CB54:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32(r5);
    r6 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    r7 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r31 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8136));
    r30 = 0;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    r8 = MemoryInline::FlatRead32(r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8059CBAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8104));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r8);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059CBD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059CBDC;
    }
}

loc_8059CBD4:
{
    r3 = 0;
    goto loc_8059CC44;
}

loc_8059CBDC:
{
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f2.d = PpcFmulsInline(f1.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = PpcFmulsInline(f0.d, f5.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8104));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f6.d);
    f2.d = PpcFmulsInline(f3.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f4.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8059CC38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8059CC40;
    }
}

loc_8059CC3C:
{
    r30 = 1;
}

loc_8059CC40:
{
    r3 = r30;
}

loc_8059CC44:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000013B gpr_write=0xE00001CB gpr_return=0x00000008 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8059CB54 func_8059CB54 preserves=true fpr_mask=0x00000000
