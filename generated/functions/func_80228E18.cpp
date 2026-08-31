#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80228E18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80228E18;

loc_80228E18:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 32;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80228E30:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228E48;
    }
}

loc_80228E44:
{
    r0 = r5;
}

loc_80228E48:
{
    r7 = MemoryInline::FlatRead8((r31 + 16));
    r4 = (r4 + r0);
    r5 = MemoryInline::FlatRead16((r31 + 2));
    r3 = r30;
    r0 = (0 - r7);
    r6 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 | r7);
    r7 = MemoryInline::FlatRead8(r31);
    r8 = MemoryInline::FlatRead8((r31 + 6));
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_0 & 1);
    r9 = MemoryInline::FlatRead8((r31 + 7));
    ctx->lr = 0x80228E78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801707F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 17), 0, 11u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 9u, (r31 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = 1127219200;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r31 + 22));
    r3 = r30;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 23));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::FlatWriteRam32((r1 + 24), r6);
    r4 = (r4 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -25176));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = (r0 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -25188));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 21));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 18));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 17));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    r8 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 19));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80170A4Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
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
    ctx->gpr[10] = r10;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF83F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80228E18 func_80228E18 preserves=true fpr_mask=0x00000000
