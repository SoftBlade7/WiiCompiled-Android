#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806B802C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B802C;

loc_806B802C:
{
}

loc_806B8030:
{
    r4 = 0x808A0000u;
    r4 = (r4 + -3704);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_806B8058;
    }
}

loc_806B803C:
{
}

loc_806B8040:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_806B80F4;
    }
}

loc_806B8044:
{
}

loc_806B8048:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_806B8190;
    }
}

loc_806B804C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(6));
}

loc_806B8050:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806B822C;
    }
}

loc_806B8054:
{
    goto loc_806B82C4;
}

loc_806B8058:
{
    r6 = MemoryInline::FlatRead32((r3 + 272));
    r0 = (r6 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806B8064:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B82C4;
    }
}

loc_806B8068:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r9 = 0;
    MemoryInline::FlatWrite32((r3 + 272), r9);
    r8 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 48));
    r7 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r3 + 300), f0.d);
    r6 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r4 = (r6 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8708));
    r0 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r7 + 8712));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 292), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 276), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 280), f4.d);
    MemoryInline::FlatWrite8((r3 + 296), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteFloat32((r3 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r0));
    goto loc_806B82C4;
}

loc_806B80F4:
{
    r6 = MemoryInline::FlatRead32((r3 + 272));
    r0 = (r6 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806B8100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B82C4;
    }
}

loc_806B8104:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r9 = 0;
    MemoryInline::FlatWrite32((r3 + 272), r9);
    r8 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 48));
    r7 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r3 + 300), f0.d);
    r6 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r4 = (r6 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8708));
    r0 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r7 + 8712));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 292), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 276), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 280), f4.d);
    MemoryInline::FlatWrite8((r3 + 296), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteFloat32((r3 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r0));
    goto loc_806B82C4;
}

loc_806B8190:
{
    r6 = MemoryInline::FlatRead32((r3 + 272));
    r0 = (r6 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806B819C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B82C4;
    }
}

loc_806B81A0:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r9 = 0;
    MemoryInline::FlatWrite32((r3 + 272), r9);
    r8 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 48));
    r7 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r3 + 300), f0.d);
    r6 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r4 = (r6 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8708));
    r0 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r7 + 8712));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 292), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 276), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 280), f4.d);
    MemoryInline::FlatWrite8((r3 + 296), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteFloat32((r3 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r0));
    goto loc_806B82C4;
}

loc_806B822C:
{
    r6 = MemoryInline::FlatRead32((r3 + 272));
    r0 = (r6 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_806B8238:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B82C4;
    }
}

loc_806B823C:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    r9 = 0;
    MemoryInline::FlatWrite32((r3 + 272), r9);
    r8 = 0x808C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 48));
    r7 = 0x808C0000u;
    MemoryInline::FlatWriteFloat32((r3 + 300), f0.d);
    r6 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 52));
    r4 = (r6 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8708));
    r0 = 1;
    f4.d = MemoryInline::FlatReadFloat32((r7 + 8712));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 256));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 248));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 252));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 292), f0.d);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 284), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 288), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 276), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f4.d));
    MemoryInline::FlatWriteFloat32((r3 + 280), f4.d);
    MemoryInline::FlatWrite8((r3 + 296), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteFloat32((r3 + 304), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16688));
    MemoryInline::FlatWriteFloat32((r3 + 248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 252), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 256), f0.d);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r0));
}

loc_806B82C4:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003D9 gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806B802C func_806B802C preserves=true fpr_mask=0x00000000
