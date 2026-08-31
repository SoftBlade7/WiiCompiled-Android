#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057C3D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8057C3D4;

loc_8057C3D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r7 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r0 & 128);
}

loc_8057C3FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C418;
    }
}

loc_8057C400:
{
    r4 = 671154176;
    r5 = MemoryInline::FlatRead32((r7 + 12));
    r0 = (r4 + -32768);
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C418;
    }
}

loc_8057C414:
{
    r6 = 0;
}

loc_8057C418:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8057C41C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C524;
    }
}

loc_8057C420:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 & 2048);
}

loc_8057C428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C474;
    }
}

loc_8057C42C:
{
    r0 = MemoryInline::FlatRead16((r3 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 192));
}

loc_8057C438:
{
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C448;
    }
}

loc_8057C440:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 200), static_cast<uint16_t>(r0));
}

loc_8057C448:
{
    r4 = MemoryInline::FlatRead16((r3 + 200));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 6800));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 196));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 188), f0.d);
}

loc_8057C474:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C540;
    }
}

loc_8057C488:
{
    r0 = (r3 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C48C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C500;
    }
}

loc_8057C490:
{
    r3 = r31;
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 192));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C4A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C4B8;
    }
}

loc_8057C4A8:
{
    r3 = r31;
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    MemoryInline::FlatWriteFloat32((r31 + 184), f0.d);
}

loc_8057C4B8:
{
    r3 = r31;
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    r5 = MemoryInline::FlatRead16((r31 + 200));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = 0x80890000u;
    r0 = (r5 + 1);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f1.d = MemoryInline::FlatReadFloat64((r4 + 6752));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 188), f0.d);
    goto loc_8057C540;
}

loc_8057C500:
{
    r3 = r31;
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 184), f0.d);
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 104));
    MemoryInline::FlatWriteFloat32((r31 + 188), f0.d);
    goto loc_8057C540;
}

loc_8057C524:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 6660));
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    r3 = r31;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f0.d = MemoryInline::FlatReadFloat32((r3 + 240));
    MemoryInline::FlatWriteFloat32((r31 + 188), f0.d);
}

loc_8057C540:
{
    r3 = r31;
    ctx->lr = 0x8057C548u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8058677Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r3 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C558:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C5D4;
    }
}

loc_8057C55C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C5D4;
    }
}

loc_8057C56C:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C570:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C5D4;
    }
}

loc_8057C574:
{
    r3 = r31;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C5D4;
    }
}

loc_8057C588:
{
    r6 = MemoryInline::FlatRead32(r31);
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 128);
}

loc_8057C59C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C5B8;
    }
}

loc_8057C5A0:
{
    r3 = 671154176;
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + -32768);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C5B8;
    }
}

loc_8057C5B4:
{
    r5 = 0;
}

loc_8057C5B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8057C5BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C5D4;
    }
}

loc_8057C5C0:
{
    r3 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_8057C5D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057C3D4 func_8057C3D4 preserves=true fpr_mask=0x00000000
