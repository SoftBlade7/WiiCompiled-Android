#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8074649C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8074649C;

loc_8074649C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    r4 = (r3 + 24);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    ctx->lr = 0x807464C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80746C64u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808A0000u;
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 11224));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f2.d = MemoryInline::FlatReadFloat32((r3 + -844));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f2.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    f1.d = PPC_Fctiwz(f1.d);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r4 = fctiwzword1;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80746500:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80746510;
    }
}

loc_80746504:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r4 = MemoryInline::FlatRead32((r1 + 20));
    goto loc_80746534;
}

loc_80746510:
{
    f0.d = (-(f2.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80746528:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80746534;
    }
}

loc_8074652C:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r4 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80746534:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -844));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    r0 = (r4 + r0);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8074649C func_8074649C preserves=true fpr_mask=0x00000000
