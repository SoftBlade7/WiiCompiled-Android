#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057D1D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_8057D1D4;

loc_8057D1D4:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r6 = 0x808B0000u;
    r6 = (r6 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    f31.d = MemoryInline::FlatReadFloat32(r31);
    r5 = MemoryInline::FlatRead32(r3);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r8 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r8 & 262144);
}

loc_8057D21C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D324;
    }
}

loc_8057D220:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r4 + 40));
}

loc_8057D230:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8057D24C;
    }
}

loc_8057D234:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 156));
    f1.d = (-(f1.d));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8057D324;
}

loc_8057D24C:
{
    r0 = MemoryInline::FlatRead32((r7 + 8));
    r0 = (r0 & 33554432);
}

loc_8057D254:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057D2A4;
    }
}

loc_8057D258:
{
    r5 = MemoryInline::FlatRead16((r3 + 332));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = 1127219200;
    r0 = MemoryInline::FlatRead16((r6 + 584));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0 = (r0 ^ -2147483648);
    f3.d = MemoryInline::FlatReadFloat64((r31 + 96));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 92));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = (-(f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_8057D324;
}

loc_8057D2A4:
{
    r0 = (r8 & -1073741824);
}

loc_8057D2A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057D324;
    }
}

loc_8057D2AC:
{
    r0 = MemoryInline::FlatRead32((r7 + 16));
    r0 = (r0 & 16);
}

loc_8057D2B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057D324;
    }
}

loc_8057D2B8:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 88));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = (-(f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8057D2D0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057D2DC;
    }
}

loc_8057D2D4:
{
    f2.d = f0.d;
    goto loc_8057D2E8;
}

loc_8057D2DC:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8057D2E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057D2E8;
    }
}

loc_8057D2E4:
{
    f2.d = f1.d;
}

loc_8057D2E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 76));
    r0 = (r8 & 67108864);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D2F0:
{
    f31.d = PpcFmulsInline(f2.d, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D314;
    }
}

loc_8057D2F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 84));
    r0 = (r8 & 536870912);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D300:
{
    f31.d = PpcFmulsInline(f31.d, f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D31C;
    }
}

loc_8057D308:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8057D31C;
}

loc_8057D314:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 80));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8057D31C:
{
    r4 = MemoryInline::FlatRead32((r3 + 644));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 12));
}

loc_8057D324:
{
    r0 = MemoryInline::FlatRead16((r3 + 596));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057D32C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057D358;
    }
}

loc_8057D330:
{
    r3 = r30;
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8057D33C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057D348;
    }
}

loc_8057D340:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    goto loc_8057D34C;
}

loc_8057D348:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 164));
}

loc_8057D34C:
{
    f0.d = PpcFmulsInline(f31.d, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 248), f0.d);
    goto loc_8057D374;
}

loc_8057D358:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 388));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
}

loc_8057D374:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 248));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 52));
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

// RECOMP_GUEST_ABI gpr_read=0xC00001FB gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8057D1D4 func_8057D1D4 preserves=true fpr_mask=0x00000000
