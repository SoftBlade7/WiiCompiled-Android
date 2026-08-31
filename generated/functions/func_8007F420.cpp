#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007F420(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8007F420;

loc_8007F420:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    f2.d = MemoryInline::FlatReadFloat32(r4);
    r5 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f8.d = std::fabs(f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29084));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f9.d = std::fabs(f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f6.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f7.d = MemoryInline::FlatReadFloat32((r4 + 20));
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_8007F454:
{
    f10.d = std::fabs(f4.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f11.d = std::fabs(f5.d);
    f12.d = std::fabs(f6.d);
    f13.d = std::fabs(f7.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4AC;
    }
}

loc_8007F470:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_8007F474:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4AC;
    }
}

loc_8007F47C:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_8007F480:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4AC;
    }
}

loc_8007F488:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_8007F48C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4AC;
    }
}

loc_8007F494:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_8007F498:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4AC;
    }
}

loc_8007F4A0:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_8007F4A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8007F544;
    }
}

loc_8007F4AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29096));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29084));
    // nop
}

loc_8007F4B8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(46));
}

loc_8007F4C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F4C4:
{
    f8.d = PpcFmulsInline(f8.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    SetCRFloatResident(cr, 0, f8.d, f0.d);
}

loc_8007F4D4:
{
    f4.d = PpcFmulsInline(f4.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f1.d);
    f6.d = PpcFmulsInline(f6.d, f1.d);
    f7.d = PpcFmulsInline(f7.d, f1.d);
    f9.d = PpcFmulsInline(f9.d, f1.d);
    f10.d = PpcFmulsInline(f10.d, f1.d);
    f11.d = PpcFmulsInline(f11.d, f1.d);
    f12.d = PpcFmulsInline(f12.d, f1.d);
    f13.d = PpcFmulsInline(f13.d, f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r5 = (r5 + 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4B8;
    }
}

loc_8007F504:
{
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_8007F508:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4B8;
    }
}

loc_8007F510:
{
    SetCRFloatResident(cr, 0, f10.d, f0.d);
}

loc_8007F514:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4B8;
    }
}

loc_8007F51C:
{
    SetCRFloatResident(cr, 0, f11.d, f0.d);
}

loc_8007F520:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4B8;
    }
}

loc_8007F528:
{
    SetCRFloatResident(cr, 0, f12.d, f0.d);
}

loc_8007F52C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4B8;
    }
}

loc_8007F534:
{
    SetCRFloatResident(cr, 0, f13.d, f0.d);
}

loc_8007F538:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007F4B8;
    }
}

loc_8007F540:
{
    goto loc_8007F5EC;
}

loc_8007F544:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29096));
    SetCRFloatResident(cr, 0, f8.d, f1.d);
}

loc_8007F54C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F550:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_8007F554:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F558:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_8007F55C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F560:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_8007F564:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F568:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_8007F56C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F570:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_8007F574:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F578:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29080));
}

loc_8007F57C:
{
    f8.d = PpcFmulsInline(f8.d, f0.d);
    r5 = (r5 + -1);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
    SetCRFloatResident(cr, 0, f8.d, f1.d);
}

loc_8007F590:
{
    f4.d = PpcFmulsInline(f4.d, f0.d);
    f5.d = PpcFmulsInline(f5.d, f0.d);
    f6.d = PpcFmulsInline(f6.d, f0.d);
    f7.d = PpcFmulsInline(f7.d, f0.d);
    f9.d = PpcFmulsInline(f9.d, f0.d);
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f11.d = PpcFmulsInline(f11.d, f0.d);
    f12.d = PpcFmulsInline(f12.d, f0.d);
    f13.d = PpcFmulsInline(f13.d, f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F5B8:
{
    SetCRFloatResident(cr, 0, f9.d, f1.d);
}

loc_8007F5BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F5C0:
{
    SetCRFloatResident(cr, 0, f10.d, f1.d);
}

loc_8007F5C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F5C8:
{
    SetCRFloatResident(cr, 0, f11.d, f1.d);
}

loc_8007F5CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F5D0:
{
    SetCRFloatResident(cr, 0, f12.d, f1.d);
}

loc_8007F5D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F5D8:
{
    SetCRFloatResident(cr, 0, f13.d, f1.d);
}

loc_8007F5DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8007F5EC;
    }
}

loc_8007F5E0:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-17));
}

loc_8007F5E8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8007F57C;
    }
}

loc_8007F5EC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    r4 = (r1 + 8);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f7.d);
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171814u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007F420 func_8007F420 preserves=true fpr_mask=0x00000000
