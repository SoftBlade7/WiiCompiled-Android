#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80196224(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80196224;

loc_80196224:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29216));
    r6 = (r3 + 244);
    r0 = (r3 + 268);
    f4.d = PpcFmulsInline(f0.d, f0.d);
}

loc_80196234:
{
    r4 = MemoryInline::FlatRead8((r6 + 8));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801962A4;
    }
}

loc_80196240:
{
    r4 = MemoryInline::FlatRead8((r6 + 9));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801962A4;
    }
}

loc_8019624C:
{
    r7 = (r3 + 196);
    r4 = (r3 + 244);
}

loc_80196254:
{
    r5 = MemoryInline::FlatRead8((r7 + 8));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80196298;
    }
}

loc_80196260:
{
    f3.d = MemoryInline::FlatReadFloat32(r6);
    f2.d = MemoryInline::FlatReadFloat32(r7);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_80196288:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80196298;
    }
}

loc_8019628C:
{
    f4.d = f0.d;
    r8 = r6;
    r9 = r7;
}

loc_80196298:
{
    r7 = (r7 + 12);
}

loc_801962A0:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r4))) {
        goto loc_80196254;
    }
}

loc_801962A4:
{
    r6 = (r6 + 12);
}

loc_801962AC:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_80196234;
    }
}

loc_801962B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -29216));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_801962BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801962C8;
    }
}

loc_801962C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

loc_801962C8:
{
    r5 = MemoryInline::FlatRead32(r9);
    r0 = (r3 + 244);
    r4 = MemoryInline::FlatRead32((r9 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_801962D8:
{
    MemoryInline::FlatWrite32(r8, r5);
    MemoryInline::FlatWrite32((r8 + 4), r4);
    r0 = MemoryInline::FlatRead32((r9 + 8));
    MemoryInline::FlatWrite32((r8 + 8), r0);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 176));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1208));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1212));
    f4.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1168));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = PpcFmulsInline(f0.d, f3.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 244), 0, 936u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 928u, (r3 + 1172), f3.d);
    f3.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 932u, (r3 + 1176), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80196354;
    }
}

loc_80196328:
{
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r4 = 0;
    r0 = -1;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 256), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 264), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 265), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 260), f0.d);
    goto loc_8019637C;
}

loc_80196354:
{
    f0.d = MemoryInline::FlatReadFloat32(r8);
    r4 = 0;
    r0 = -1;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 252), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 253), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 248), f0.d);
}

loc_8019637C:
{
    r0 = MemoryInline::FlatRead8((r3 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80196390;
    }
}

loc_80196388:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

loc_80196390:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000023F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80196224 func_80196224 preserves=true fpr_mask=0x00000000
