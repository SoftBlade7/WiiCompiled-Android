#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80618020(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80618020;

loc_80618020:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    r4 = (r4 + 400);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    r3 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r5 = (r30 + 400);
    // inline leaf 0x8051201C (9 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051201C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = 0;
    f1.d = PpcFmulsInline(f1.d, f1.d);
    r6 = MemoryInline::FlatRead32((r31 + 388));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80618074:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061808C;
    }
}

loc_8061807C:
{
    r0 = MemoryInline::FlatRead32((r30 + 388));
}

loc_80618084:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8061808C;
    }
}

loc_80618088:
{
    r5 = 1;
}

loc_8061808C:
{
}

loc_80618090:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806180A4;
    }
}

loc_80618094:
{
    r0 = MemoryInline::FlatRead32((r30 + 388));
}

loc_8061809C:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(r0))) {
        goto loc_806180A4;
    }
}

loc_806180A0:
{
    r3 = 1;
}

loc_806180A4:
{
}

loc_806180A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806180D4;
    }
}

loc_806180AC:
{
}

loc_806180B0:
{
    r3 = 0;
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_806180C8;
    }
}

loc_806180B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 388));
}

loc_806180C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_806180C8;
    }
}

loc_806180C4:
{
    r3 = 1;
}

loc_806180C8:
{
}

loc_806180CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806180D4;
    }
}

loc_806180D0:
{
    r4 = 0;
}

loc_806180D4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 400));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 400));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806180E0:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_806180EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_80618104;
    }
}

loc_806180F0:
{
    MemoryInline::FlatWriteFloat32((r31 + 400), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 400), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_80618104:
{
    r3 = 0x809C0000u;
    r3 = (r3 + 7552);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 100));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80618114:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806182D0;
    }
}

loc_80618118:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 30632));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80618128:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80618158;
    }
}

loc_8061812C:
{
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 30460));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80618138:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80618158;
    }
}

loc_8061813C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 408));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 408));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80618148:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80618150;
    }
}

loc_8061814C:
{
    goto loc_80618154;
}

loc_80618150:
{
    f2.d = f3.d;
}

loc_80618154:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
}

loc_80618158:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 30632));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_80618168:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80618198;
    }
}

loc_8061816C:
{
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 30460));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80618178:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80618198;
    }
}

loc_8061817C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 412));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 412));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80618188:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80618194;
    }
}

loc_8061818C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    goto loc_80618198;
}

loc_80618194:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
}

loc_80618198:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->lr = 0x806181B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r29 = 0x809C0000u;
    r3 = (r1 + 8);
    r5 = (r29 + 7552);
    r4 = (r1 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    // inline leaf 0x8054BE10 (7 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8054BE10
    f2.d = MemoryInline::FlatReadFloat32((r31 + 400));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 404));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 400), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 404), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 400));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 404));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 400), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 404), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 7552));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 400));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8061821C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80618228;
    }
}

loc_80618220:
{
    f2.d = f0.d;
    goto loc_80618234;
}

loc_80618228:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8061822C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80618234;
    }
}

loc_80618230:
{
    f2.d = f1.d;
}

loc_80618234:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r31 + 400), f2.d);
    r3 = (r3 + 7552);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 404));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80618250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061825C;
    }
}

loc_80618254:
{
    f1.d = f0.d;
    goto loc_80618268;
}

loc_8061825C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80618260:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80618268;
    }
}

loc_80618264:
{
    f1.d = f2.d;
}

loc_80618268:
{
    MemoryInline::FlatWriteFloat32((r31 + 404), f1.d);
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 7552));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 400));
    f0.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80618280:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061828C;
    }
}

loc_80618284:
{
    f2.d = f0.d;
    goto loc_80618298;
}

loc_8061828C:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80618290:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80618298;
    }
}

loc_80618294:
{
    f2.d = f1.d;
}

loc_80618298:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r30 + 400), f2.d);
    r3 = (r3 + 7552);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 404));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806182B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806182C0;
    }
}

loc_806182B8:
{
    f1.d = f0.d;
    goto loc_806182CC;
}

loc_806182C0:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806182C4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806182CC;
    }
}

loc_806182C8:
{
    f1.d = f2.d;
}

loc_806182CC:
{
    MemoryInline::FlatWriteFloat32((r30 + 404), f1.d);
}

loc_806182D0:
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
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xE000007F gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80618020 func_80618020 preserves=true fpr_mask=0x00000000
